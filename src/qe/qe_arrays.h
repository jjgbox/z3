/*++
Copyright (c) 2015 Microsoft Corporation

Module Name:

    qe_arrays.h

Abstract:

    Model based projection for arrays

Author:

    Nikolaj Bjorner (nbjorner) 2015-06-13

Revision History:

--*/


#ifndef __QE_ARRAYS_H_
#define __QE_ARRAYS_H_

#include "ast/array_decl_plugin.h"
#include "qe/qe_mbp.h"

namespace qe {

    class array_project_plugin : public project_plugin {
        struct imp;
        imp* m_imp;
    public:
        array_project_plugin(ast_manager& m);
        ~array_project_plugin() override;
        bool operator()(model& model, app* var, app_ref_vector& vars, expr_ref_vector& lits) override;
        bool solve(model& model, app_ref_vector& vars, expr_ref_vector& lits) override;
        family_id get_family_id() override;
    };

};

#endif
