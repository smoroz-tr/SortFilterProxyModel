#ifndef SORTFILTERPROXYMODEL_H
#define SORTFILTERPROXYMODEL_H

#include "filters/filter.h"
#include "filters/alloffilter.h"
#include "filters/anyoffilter.h"
#include "filters/expressionfilter.h"
#include "filters/filtercontainer.h"
#include "filters/filtercontainerfilter.h"
#include "filters/filtersqmltypes.h"
#include "filters/indexfilter.h"
#include "filters/rangefilter.h"
#include "filters/regexpfilter.h"
#include "filters/rolefilter.h"
#include "filters/valuefilter.h"

#include "proxyroles/proxyrole.h"
#include "proxyroles/expressionrole.h"
#include "proxyroles/filterrole.h"
#include "proxyroles/joinrole.h"
#include "proxyroles/proxyrolecontainer.h"
#include "proxyroles/proxyrolesqmltypes.h"
#include "proxyroles/regexprole.h"
#include "proxyroles/singlerole.h"
#include "proxyroles/switchrole.h"

#include "sorters/sorter.h"
#include "sorters/expressionsorter.h"
#include "sorters/filtersorter.h"
#include "sorters/rolesorter.h"
#include "sorters/sortercontainer.h"
#include "sorters/sortersqmltypes.h"
#include "sorters/stringsorter.h"

#include "qqmlsortfilterproxymodel.h"


namespace qqsfpm {

void registerSortFilterProxyModelTypes() {
    registerFiltersTypes();
    registerProxyRoleTypes();
    registerSorterTypes();
    registerQQmlSortFilterProxyModelTypes();
}

}
#endif // SORTFILTERPROXYMODEL_H
