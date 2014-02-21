
/* This file was generated automatically by Zephir do not modify it! */

#ifndef ZEPHIR_CLASS_ENTRIES_H
#define ZEPHIR_CLASS_ENTRIES_H

#include "phalcon/acl.h"
#include "phalcon/acl/adapter.h"
#include "phalcon/acl/adapter/memory.h"
#include "phalcon/acl/adapterinterface.h"
#include "phalcon/acl/exception.h"
#include "phalcon/acl/resource.h"
#include "phalcon/acl/resourceinterface.h"
#include "phalcon/acl/role.h"
#include "phalcon/acl/roleinterface.h"
#include "phalcon/annotations/adapter.h"
#include "phalcon/annotations/adapter/apc.h"
#include "phalcon/annotations/adapter/files.h"
#include "phalcon/annotations/adapter/memory.h"
#include "phalcon/annotations/adapter/xcache.h"
#include "phalcon/annotations/adapterinterface.h"
#include "phalcon/annotations/annotation.h"
#include "phalcon/annotations/collection.h"
#include "phalcon/annotations/exception.h"
#include "phalcon/annotations/reader.h"
#include "phalcon/annotations/readerinterface.h"
#include "phalcon/annotations/reflection.h"
#include "phalcon/assets/collection.h"
#include "phalcon/assets/exception.h"
#include "phalcon/assets/filterinterface.h"
#include "phalcon/assets/filters/cssmin.h"
#include "phalcon/assets/filters/jsmin.h"
#include "phalcon/assets/filters/none.h"
#include "phalcon/assets/manager.h"
#include "phalcon/assets/resource.h"
#include "phalcon/assets/resource/css.h"
#include "phalcon/assets/resource/js.h"
#include "phalcon/cache/backend.h"
#include "phalcon/cache/backend/apc.h"
#include "phalcon/cache/backend/file.h"
#include "phalcon/cache/backend/libmemcached.h"
#include "phalcon/cache/backend/memcache.h"
#include "phalcon/cache/backend/memory.h"
#include "phalcon/cache/backend/mongo.h"
#include "phalcon/cache/backend/xcache.h"
#include "phalcon/cache/backendinterface.h"
#include "phalcon/cache/exception.h"
#include "phalcon/cache/frontend/base64.h"
#include "phalcon/cache/frontend/data.h"
#include "phalcon/cache/frontend/igbinary.h"
#include "phalcon/cache/frontend/json.h"
#include "phalcon/cache/frontend/none.h"
#include "phalcon/cache/frontend/output.h"
#include "phalcon/cache/frontendinterface.h"
#include "phalcon/cache/multiple.h"
#include "phalcon/cli/console.h"
#include "phalcon/cli/console/exception.h"
#include "phalcon/cli/dispatcher.h"
#include "phalcon/cli/dispatcher/exception.h"
#include "phalcon/cli/router.h"
#include "phalcon/cli/router/exception.h"
#include "phalcon/cli/task.h"
#include "phalcon/config.h"
#include "phalcon/config/adapter/ini.h"
#include "phalcon/config/adapter/json.h"
#include "phalcon/config/exception.h"
#include "phalcon/crypt.h"
#include "phalcon/crypt/exception.h"
#include "phalcon/cryptinterface.h"
#include "phalcon/db.h"
#include "phalcon/db/adapter.h"
#include "phalcon/db/adapter/pdo.h"
#include "phalcon/db/adapter/pdo/mysql.h"
#include "phalcon/db/adapter/pdo/oracle.h"
#include "phalcon/db/adapter/pdo/postgresql.h"
#include "phalcon/db/adapter/pdo/sqlite.h"
#include "phalcon/db/adapterinterface.h"
#include "phalcon/db/column.h"
#include "phalcon/db/columninterface.h"
#include "phalcon/db/dialect.h"
#include "phalcon/db/dialect/mysql.h"
#include "phalcon/db/dialect/oracle.h"
#include "phalcon/db/dialect/postgresql.h"
#include "phalcon/db/dialect/sqlite.h"
#include "phalcon/db/dialectinterface.h"
#include "phalcon/db/exception.h"
#include "phalcon/db/index.h"
#include "phalcon/db/indexinterface.h"
#include "phalcon/db/profiler.h"
#include "phalcon/db/profiler/item.h"
#include "phalcon/db/rawvalue.h"
#include "phalcon/db/reference.h"
#include "phalcon/db/referenceinterface.h"
#include "phalcon/db/result/pdo.h"
#include "phalcon/db/resultinterface.h"
#include "phalcon/debug.h"
#include "phalcon/debug/dump.h"
#include "phalcon/debug/exception.h"
#include "phalcon/di.h"
#include "phalcon/di/exception.h"
#include "phalcon/di/factorydefault.h"
#include "phalcon/di/factorydefault/cli.h"
#include "phalcon/di/injectable.h"
#include "phalcon/di/injectionawareinterface.h"
#include "phalcon/di/service.h"
#include "phalcon/di/service/builder.h"
#include "phalcon/di/serviceinterface.h"
#include "phalcon/diinterface.h"
#include "phalcon/dispatcher.h"
#include "phalcon/dispatcherinterface.h"
#include "phalcon/escaper.h"
#include "phalcon/escaper/exception.h"
#include "phalcon/escaperinterface.h"
#include "phalcon/events/event.h"
#include "phalcon/events/eventsawareinterface.h"
#include "phalcon/events/exception.h"
#include "phalcon/events/manager.h"
#include "phalcon/events/managerinterface.h"
#include "phalcon/exception.h"
#include "phalcon/filter.h"
#include "phalcon/filter/exception.h"
#include "phalcon/filter/userfilterinterface.h"
#include "phalcon/filterinterface.h"
#include "phalcon/flash.h"
#include "phalcon/flash/direct.h"
#include "phalcon/flash/exception.h"
#include "phalcon/flash/session.h"
#include "phalcon/flashinterface.h"
#include "phalcon/forms/element.h"
#include "phalcon/forms/element/check.h"
#include "phalcon/forms/element/date.h"
#include "phalcon/forms/element/email.h"
#include "phalcon/forms/element/file.h"
#include "phalcon/forms/element/hidden.h"
#include "phalcon/forms/element/numeric.h"
#include "phalcon/forms/element/password.h"
#include "phalcon/forms/element/select.h"
#include "phalcon/forms/element/submit.h"
#include "phalcon/forms/element/text.h"
#include "phalcon/forms/element/textarea.h"
#include "phalcon/forms/elementinterface.h"
#include "phalcon/forms/exception.h"
#include "phalcon/forms/form.h"
#include "phalcon/forms/manager.h"
#include "phalcon/http/cookie.h"
#include "phalcon/http/cookie/exception.h"
#include "phalcon/http/request.h"
#include "phalcon/http/request/exception.h"
#include "phalcon/http/request/file.h"
#include "phalcon/http/request/fileinterface.h"
#include "phalcon/http/requestinterface.h"
#include "phalcon/http/response.h"
#include "phalcon/http/response/cookies.h"
#include "phalcon/http/response/cookiesinterface.h"
#include "phalcon/http/response/exception.h"
#include "phalcon/http/response/headers.h"
#include "phalcon/http/response/headersinterface.h"
#include "phalcon/http/responseinterface.h"
#include "phalcon/image.h"
#include "phalcon/image/adapter.h"
#include "phalcon/image/adapter/gd.h"
#include "phalcon/image/adapter/imagick.h"
#include "phalcon/image/adapterinterface.h"
#include "phalcon/image/exception.h"
#include "phalcon/kernel.h"
#include "phalcon/loader.h"
#include "phalcon/loader/exception.h"
#include "phalcon/logger.h"
#include "phalcon/logger/adapter.h"
#include "phalcon/logger/adapter/file.h"
#include "phalcon/logger/adapter/firephp.h"
#include "phalcon/logger/adapter/stream.h"
#include "phalcon/logger/adapter/syslog.h"
#include "phalcon/logger/adapterinterface.h"
#include "phalcon/logger/exception.h"
#include "phalcon/logger/formatter.h"
#include "phalcon/logger/formatter/firephp.h"
#include "phalcon/logger/formatter/json.h"
#include "phalcon/logger/formatter/line.h"
#include "phalcon/logger/formatter/syslog.h"
#include "phalcon/logger/formatterinterface.h"
#include "phalcon/logger/item.h"
#include "phalcon/logger/multiple.h"
#include "phalcon/mvc/application.h"
#include "phalcon/mvc/application/exception.h"
#include "phalcon/mvc/collection.h"
#include "phalcon/mvc/collection/document.h"
#include "phalcon/mvc/collection/exception.h"
#include "phalcon/mvc/collection/manager.h"
#include "phalcon/mvc/collection/managerinterface.h"
#include "phalcon/mvc/collectioninterface.h"
#include "phalcon/mvc/controller.h"
#include "phalcon/mvc/controllerinterface.h"
#include "phalcon/mvc/dispatcher.h"
#include "phalcon/mvc/dispatcher/exception.h"
#include "phalcon/mvc/dispatcherinterface.h"
#include "phalcon/mvc/micro.h"
#include "phalcon/mvc/micro/collection.h"
#include "phalcon/mvc/micro/collectioninterface.h"
#include "phalcon/mvc/micro/exception.h"
#include "phalcon/mvc/micro/lazyloader.h"
#include "phalcon/mvc/micro/middlewareinterface.h"
#include "phalcon/mvc/model.h"
#include "phalcon/mvc/model/behavior.h"
#include "phalcon/mvc/model/behavior/softdelete.h"
#include "phalcon/mvc/model/behavior/timestampable.h"
#include "phalcon/mvc/model/behaviorinterface.h"
#include "phalcon/mvc/model/criteria.h"
#include "phalcon/mvc/model/criteriainterface.h"
#include "phalcon/mvc/model/exception.h"
#include "phalcon/mvc/model/manager.h"
#include "phalcon/mvc/model/managerinterface.h"
#include "phalcon/mvc/model/message.h"
#include "phalcon/mvc/model/messageinterface.h"
#include "phalcon/mvc/model/metadata.h"
#include "phalcon/mvc/model/metadata/apc.h"
#include "phalcon/mvc/model/metadata/files.h"
#include "phalcon/mvc/model/metadata/memory.h"
#include "phalcon/mvc/model/metadata/session.h"
#include "phalcon/mvc/model/metadata/strategy/annotations.h"
#include "phalcon/mvc/model/metadata/strategy/introspection.h"
#include "phalcon/mvc/model/metadata/xcache.h"
#include "phalcon/mvc/model/metadatainterface.h"
#include "phalcon/mvc/model/query.h"
#include "phalcon/mvc/model/query/builder.h"
#include "phalcon/mvc/model/query/builderinterface.h"
#include "phalcon/mvc/model/query/lang.h"
#include "phalcon/mvc/model/query/status.h"
#include "phalcon/mvc/model/query/statusinterface.h"
#include "phalcon/mvc/model/queryinterface.h"
#include "phalcon/mvc/model/relation.h"
#include "phalcon/mvc/model/relationinterface.h"
#include "phalcon/mvc/model/resultinterface.h"
#include "phalcon/mvc/model/resultset.h"
#include "phalcon/mvc/model/resultset/complex.h"
#include "phalcon/mvc/model/resultset/simple.h"
#include "phalcon/mvc/model/resultsetinterface.h"
#include "phalcon/mvc/model/row.h"
#include "phalcon/mvc/model/transaction.h"
#include "phalcon/mvc/model/transaction/exception.h"
#include "phalcon/mvc/model/transaction/failed.h"
#include "phalcon/mvc/model/transaction/manager.h"
#include "phalcon/mvc/model/transaction/managerinterface.h"
#include "phalcon/mvc/model/transactioninterface.h"
#include "phalcon/mvc/model/validationfailed.h"
#include "phalcon/mvc/model/validator.h"
#include "phalcon/mvc/model/validator/email.h"
#include "phalcon/mvc/model/validator/exclusionin.h"
#include "phalcon/mvc/model/validator/inclusionin.h"
#include "phalcon/mvc/model/validator/numericality.h"
#include "phalcon/mvc/model/validator/presenceof.h"
#include "phalcon/mvc/model/validator/regex.h"
#include "phalcon/mvc/model/validator/stringlength.h"
#include "phalcon/mvc/model/validator/uniqueness.h"
#include "phalcon/mvc/model/validator/url.h"
#include "phalcon/mvc/model/validatorinterface.h"
#include "phalcon/mvc/modelinterface.h"
#include "phalcon/mvc/moduledefinitioninterface.h"
#include "phalcon/mvc/router.h"
#include "phalcon/mvc/router/annotations.h"
#include "phalcon/mvc/router/exception.h"
#include "phalcon/mvc/router/group.h"
#include "phalcon/mvc/router/route.h"
#include "phalcon/mvc/router/routeinterface.h"
#include "phalcon/mvc/routerinterface.h"
#include "phalcon/mvc/url.h"
#include "phalcon/mvc/url/exception.h"
#include "phalcon/mvc/urlinterface.h"
#include "phalcon/mvc/user/component.h"
#include "phalcon/mvc/user/module.h"
#include "phalcon/mvc/user/plugin.h"
#include "phalcon/mvc/view.h"
#include "phalcon/mvc/view/engine.h"
#include "phalcon/mvc/view/engine/php.h"
#include "phalcon/mvc/view/engine/volt.h"
#include "phalcon/mvc/view/engine/volt/compiler.h"
#include "phalcon/mvc/view/engineinterface.h"
#include "phalcon/mvc/view/exception.h"
#include "phalcon/mvc/view/simple.h"
#include "phalcon/mvc/viewinterface.h"
#include "phalcon/paginator/adapter/model.h"
#include "phalcon/paginator/adapter/nativearray.h"
#include "phalcon/paginator/adapter/querybuilder.h"
#include "phalcon/paginator/adapterinterface.h"
#include "phalcon/paginator/exception.h"
#include "phalcon/queue/beanstalk.h"
#include "phalcon/queue/beanstalk/job.h"
#include "phalcon/security.h"
#include "phalcon/security/exception.h"
#include "phalcon/session.h"
#include "phalcon/session/adapter.h"
#include "phalcon/session/adapter/files.h"
#include "phalcon/session/adapterinterface.h"
#include "phalcon/session/bag.h"
#include "phalcon/session/baginterface.h"
#include "phalcon/session/exception.h"
#include "phalcon/tag.h"
#include "phalcon/tag/exception.h"
#include "phalcon/tag/select.h"
#include "phalcon/text.h"
#include "phalcon/translate.h"
#include "phalcon/translate/adapter.h"
#include "phalcon/translate/adapter/nativearray.h"
#include "phalcon/translate/adapterinterface.h"
#include "phalcon/translate/exception.h"
#include "phalcon/validation.h"
#include "phalcon/validation/exception.h"
#include "phalcon/validation/message.h"
#include "phalcon/validation/message/group.h"
#include "phalcon/validation/messageinterface.h"
#include "phalcon/validation/validator.h"
#include "phalcon/validation/validator/alnum.h"
#include "phalcon/validation/validator/alpha.h"
#include "phalcon/validation/validator/between.h"
#include "phalcon/validation/validator/confirmation.h"
#include "phalcon/validation/validator/digit.h"
#include "phalcon/validation/validator/email.h"
#include "phalcon/validation/validator/exclusionin.h"
#include "phalcon/validation/validator/file.h"
#include "phalcon/validation/validator/identical.h"
#include "phalcon/validation/validator/inclusionin.h"
#include "phalcon/validation/validator/presenceof.h"
#include "phalcon/validation/validator/regex.h"
#include "phalcon/validation/validator/stringlength.h"
#include "phalcon/validation/validator/uniqueness.h"
#include "phalcon/validation/validator/url.h"
#include "phalcon/validation/validatorinterface.h"
#include "phalcon/version.h"

#endif