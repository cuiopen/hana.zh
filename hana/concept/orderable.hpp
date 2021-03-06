/*!
@file
Defines `boost::hana::Orderable`.

@copyright Louis Dionne 2013-2016
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_HANA_CONCEPT_ORDERABLE_HPP
#define BOOST_HANA_CONCEPT_ORDERABLE_HPP

#include <hana/fwd/concept/orderable.hpp>

#include <hana/config.hpp>
#include <hana/core/default.hpp>
#include <hana/core/tag_of.hpp>
#include <hana/detail/integral_constant.hpp>
#include <hana/less.hpp>


BOOST_HANA_NAMESPACE_BEGIN
    template <typename Ord>
    struct Orderable
        : hana::integral_constant<bool,
            !is_default<less_impl<typename tag_of<Ord>::type,
                                  typename tag_of<Ord>::type>>::value
        >
    { };
BOOST_HANA_NAMESPACE_END

#endif // !BOOST_HANA_CONCEPT_ORDERABLE_HPP
