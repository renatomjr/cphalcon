
#ifdef HAVE_CONFIG_H
#include "../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../php_ext.h"
#include "../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/exception.h"
#include "kernel/fcall.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


/*
 +------------------------------------------------------------------------+
 | Phalcon Framework                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
 +------------------------------------------------------------------------+
 | This source file is subject to the New BSD License that is bundled     |
 | with this package in the file docs/LICENSE.txt.                        |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@phalconphp.com so we can send you a copy immediately.       |
 +------------------------------------------------------------------------+
 | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
 |          Eduar Carvajal <eduar@phalconphp.com>                         |
 +------------------------------------------------------------------------+
 */
/**
 * Phalcon\Mvc\Model\Transaction\Failed
 *
 * This class will be thrown to exit a try/catch block for isolated transactions
 */
ZEPHIR_INIT_CLASS(Phalcon_Mvc_Model_Transaction_Failed) {

	ZEPHIR_REGISTER_CLASS_EX(Phalcon\\Mvc\\Model\\Transaction, Failed, phalcon, mvc_model_transaction_failed, phalcon_mvc_model_transaction_exception_ce, phalcon_mvc_model_transaction_failed_method_entry, 0);

	zend_declare_property_null(phalcon_mvc_model_transaction_failed_ce, SL("_record"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

/**
 * Phalcon\Mvc\Model\Transaction\Failed constructor
 *
 * @param string message
 * @param Phalcon\Mvc\ModelInterface record
 */
PHP_METHOD(Phalcon_Mvc_Model_Transaction_Failed, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *message_param = NULL, *record;
	zval *message = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &message_param, &record);

	if (Z_TYPE_P(message_param) != IS_STRING && Z_TYPE_P(message_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'message' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(message_param) == IS_STRING) {
		message = message_param;
	} else {
		ZEPHIR_INIT_VAR(message);
		ZVAL_EMPTY_STRING(message);
	}


	if (!(zephir_instance_of_ev(record, phalcon_mvc_modelinterface_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'record' must be an instance of 'Phalcon\\Mvc\\ModelInterface'");
		return;
	}
	zephir_update_property_this(this_ptr, SL("_record"), record TSRMLS_CC);
	zephir_call_parent_p1_noret(this_ptr, phalcon_mvc_model_transaction_failed_ce, "__construct", message);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 * Returns validation record messages which stop the transaction
 *
 * @return Phalcon\Mvc\Model\MessageInterface[]
 */
PHP_METHOD(Phalcon_Mvc_Model_Transaction_Failed, getRecordMessages) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *record;

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(record);
	zephir_read_property_this(&record, this_ptr, SL("_record"), PH_NOISY_CC);
	if ((Z_TYPE_P(record) != IS_NULL)) {
		zephir_call_method(return_value, record, "getmessages");
		zephir_check_call_status();
		RETURN_MM();
	}
	zephir_call_method(return_value, this_ptr, "getmessage");
	zephir_check_call_status();
	RETURN_MM();

}

/**
 * Returns validation record messages which stop the transaction
 *
 * @return Phalcon\Mvc\ModelInterface
 */
PHP_METHOD(Phalcon_Mvc_Model_Transaction_Failed, getRecord) {


	RETURN_MEMBER(this_ptr, "_record");

}

