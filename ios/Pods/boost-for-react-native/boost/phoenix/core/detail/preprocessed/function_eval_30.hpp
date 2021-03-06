/*=============================================================================
    Copyright (c) 2001-2007 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
namespace boost { namespace phoenix { namespace detail { namespace tag { struct function_eval {}; template <typename Ostream> inline Ostream &operator<<( Ostream & os , function_eval) { os << "function_eval"; return os; } } namespace expression { template < typename A0 = void , typename A1 = void , typename A2 = void , typename A3 = void , typename A4 = void , typename A5 = void , typename A6 = void , typename A7 = void , typename A8 = void , typename A9 = void , typename A10 = void , typename A11 = void , typename A12 = void , typename A13 = void , typename A14 = void , typename A15 = void , typename A16 = void , typename A17 = void , typename A18 = void , typename A19 = void , typename A20 = void , typename A21 = void , typename A22 = void , typename A23 = void , typename A24 = void , typename A25 = void , typename A26 = void , typename A27 = void , typename A28 = void , typename A29 = void , typename Dummy = void > struct function_eval; template < typename A0 , typename A1 > struct function_eval< A0 , A1 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 > {}; template < typename A0 , typename A1 , typename A2 > struct function_eval< A0 , A1 , A2 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 > struct function_eval< A0 , A1 , A2 , A3 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 > struct function_eval< A0 , A1 , A2 , A3 , A4 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28 > {}; template < typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28 , typename A29 > struct function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28 , A29 > : boost::phoenix::expr< tag:: function_eval , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28 , A29 > {}; } namespace rule { struct function_eval : expression:: function_eval < meta_grammar , boost::proto::vararg< meta_grammar > > {}; } namespace functional { typedef boost::proto::functional::make_expr< tag:: function_eval > make_function_eval; } namespace result_of { template <typename A0 = void , typename A1 = void , typename A2 = void , typename A3 = void , typename A4 = void , typename A5 = void , typename A6 = void , typename A7 = void , typename A8 = void , typename A9 = void , typename A10 = void , typename A11 = void , typename A12 = void , typename A13 = void , typename A14 = void , typename A15 = void , typename A16 = void , typename A17 = void , typename A18 = void , typename A19 = void , typename A20 = void , typename A21 = void , typename A22 = void , typename A23 = void , typename A24 = void , typename A25 = void , typename A26 = void , typename A27 = void , typename A28 = void, typename Dummy = void> struct make_function_eval; template <typename A0> struct make_function_eval <A0> : boost::result_of< functional:: make_function_eval( A0 ) > {}; template <typename A0 , typename A1> struct make_function_eval <A0 , A1> : boost::result_of< functional:: make_function_eval( A0 , A1 ) > {}; template <typename A0 , typename A1 , typename A2> struct make_function_eval <A0 , A1 , A2> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3> struct make_function_eval <A0 , A1 , A2 , A3> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct make_function_eval <A0 , A1 , A2 , A3 , A4> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 ) > {}; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27> struct make_function_eval <A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27> : boost::result_of< functional:: make_function_eval( A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 ) > {}; } template <typename A0> inline typename result_of:: make_function_eval< A0 >::type make_function_eval(A0 const& a0) { return functional::make_function_eval()(a0); } template <typename A0 , typename A1> inline typename result_of:: make_function_eval< A0 , A1 >::type make_function_eval(A0 const& a0 , A1 const& a1) { return functional::make_function_eval()(a0 , a1); } template <typename A0 , typename A1 , typename A2> inline typename result_of:: make_function_eval< A0 , A1 , A2 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2) { return functional::make_function_eval()(a0 , a1 , a2); } template <typename A0 , typename A1 , typename A2 , typename A3> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3) { return functional::make_function_eval()(a0 , a1 , a2 , a3); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21 , A22 const& a22) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21 , A22 const& a22 , A23 const& a23) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21 , A22 const& a22 , A23 const& a23 , A24 const& a24) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21 , A22 const& a22 , A23 const& a23 , A24 const& a24 , A25 const& a25) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21 , A22 const& a22 , A23 const& a23 , A24 const& a24 , A25 const& a25 , A26 const& a26) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27> inline typename result_of:: make_function_eval< A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 >::type make_function_eval(A0 const& a0 , A1 const& a1 , A2 const& a2 , A3 const& a3 , A4 const& a4 , A5 const& a5 , A6 const& a6 , A7 const& a7 , A8 const& a8 , A9 const& a9 , A10 const& a10 , A11 const& a11 , A12 const& a12 , A13 const& a13 , A14 const& a14 , A15 const& a15 , A16 const& a16 , A17 const& a17 , A18 const& a18 , A19 const& a19 , A20 const& a20 , A21 const& a21 , A22 const& a22 , A23 const& a23 , A24 const& a24 , A25 const& a25 , A26 const& a26 , A27 const& a27) { return functional::make_function_eval()(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26 , a27); } } } } namespace boost { namespace phoenix { template <typename Dummy> struct meta_grammar::case_< :: boost :: phoenix :: detail :: tag:: function_eval , Dummy > : enable_rule< :: boost :: phoenix :: detail :: rule:: function_eval , Dummy > {}; } }
namespace boost { namespace phoenix {
    namespace detail
    {
        template <typename T>
        T& help_rvalue_deduction(T& x)
        {
            return x;
        }
        
        template <typename T>
        T const& help_rvalue_deduction(T const& x)
        {
            return x;
        }
        struct function_eval
        {
            template <typename Sig>
            struct result;
            template <typename This, typename F, typename Context>
            struct result<This(F, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::result_of<fn()>::type type;
            };
            template <typename F, typename Context>
            typename result<function_eval(F const&, Context const&)>::type
            operator()(F const & f, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)();
            }
            template <typename F, typename Context>
            typename result<function_eval(F &, Context const&)>::type
            operator()(F & f, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)();
            }
        
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0
              , typename Context
            >
            struct result<This(F, A0, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0;
                typedef typename
                    boost::result_of<fn(a0)>::type
                    type;
                
            };
            template <typename F, typename A0, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)));
            }
            template <typename F, typename A0, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1
              , typename Context
            >
            struct result<This(F, A0 , A1, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1;
                typedef typename
                    boost::result_of<fn(a0 , a1)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)));
            }
            template <typename F, typename A0 , typename A1, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A23 , Context ) >::type >::type >::type a23;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A23 , Context ) >::type >::type >::type a23; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A24 , Context ) >::type >::type >::type a24;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A23 , Context ) >::type >::type >::type a23; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A24 , Context ) >::type >::type >::type a24; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A25 , Context ) >::type >::type >::type a25;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A23 , Context ) >::type >::type >::type a23; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A24 , Context ) >::type >::type >::type a24; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A25 , Context ) >::type >::type >::type a25; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A26 , Context ) >::type >::type >::type a26;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 & , A26 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25 , A26 & a26, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a26, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 & , A26 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25 , A26 & a26, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a26, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A23 , Context ) >::type >::type >::type a23; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A24 , Context ) >::type >::type >::type a24; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A25 , Context ) >::type >::type >::type a25; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A26 , Context ) >::type >::type >::type a26; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A27 , Context ) >::type >::type >::type a27;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26 , a27)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 & , A26 & , A27 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25 , A26 & a26 , A27 & a27, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a26, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a27, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 & , A26 & , A27 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25 , A26 & a26 , A27 & a27, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a26, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a27, ctx)));
            }
    
    
    
    
    
    
    
            template <
                typename This
              , typename F
              , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28
              , typename Context
            >
            struct result<This(F, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28, Context)>
            {
                typedef typename
                    remove_reference<
                        typename boost::result_of<evaluator(F, Context)>::type
                    >::type
                    fn;
                typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A0 , Context ) >::type >::type >::type a0; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A1 , Context ) >::type >::type >::type a1; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A2 , Context ) >::type >::type >::type a2; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A3 , Context ) >::type >::type >::type a3; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A4 , Context ) >::type >::type >::type a4; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A5 , Context ) >::type >::type >::type a5; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A6 , Context ) >::type >::type >::type a6; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A7 , Context ) >::type >::type >::type a7; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A8 , Context ) >::type >::type >::type a8; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A9 , Context ) >::type >::type >::type a9; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A10 , Context ) >::type >::type >::type a10; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A11 , Context ) >::type >::type >::type a11; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A12 , Context ) >::type >::type >::type a12; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A13 , Context ) >::type >::type >::type a13; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A14 , Context ) >::type >::type >::type a14; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A15 , Context ) >::type >::type >::type a15; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A16 , Context ) >::type >::type >::type a16; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A17 , Context ) >::type >::type >::type a17; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A18 , Context ) >::type >::type >::type a18; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A19 , Context ) >::type >::type >::type a19; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A20 , Context ) >::type >::type >::type a20; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A21 , Context ) >::type >::type >::type a21; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A22 , Context ) >::type >::type >::type a22; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A23 , Context ) >::type >::type >::type a23; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A24 , Context ) >::type >::type >::type a24; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A25 , Context ) >::type >::type >::type a25; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A26 , Context ) >::type >::type >::type a26; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A27 , Context ) >::type >::type >::type a27; typedef typename boost::add_reference< typename boost::add_const< typename boost::result_of< boost::phoenix::evaluator( A28 , Context ) >::type >::type >::type a28;
                typedef typename
                    boost::result_of<fn(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26 , a27 , a28)>::type
                    type;
                
            };
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28, typename Context>
            typename result<
                function_eval(
                    F const &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 & , A26 & , A27 & , A28 &
                  , Context const &
                )
            >::type
            operator()(F const & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25 , A26 & a26 , A27 & a27 , A28 & a28, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a26, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a27, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a28, ctx)));
            }
            template <typename F, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28, typename Context>
            typename result<
                function_eval(
                    F &
                  , A0 & , A1 & , A2 & , A3 & , A4 & , A5 & , A6 & , A7 & , A8 & , A9 & , A10 & , A11 & , A12 & , A13 & , A14 & , A15 & , A16 & , A17 & , A18 & , A19 & , A20 & , A21 & , A22 & , A23 & , A24 & , A25 & , A26 & , A27 & , A28 &
                  , Context const &
                )
            >::type
            operator()(F & f, A0 & a0 , A1 & a1 , A2 & a2 , A3 & a3 , A4 & a4 , A5 & a5 , A6 & a6 , A7 & a7 , A8 & a8 , A9 & a9 , A10 & a10 , A11 & a11 , A12 & a12 , A13 & a13 , A14 & a14 , A15 & a15 , A16 & a16 , A17 & a17 , A18 & a18 , A19 & a19 , A20 & a20 , A21 & a21 , A22 & a22 , A23 & a23 , A24 & a24 , A25 & a25 , A26 & a26 , A27 & a27 , A28 & a28, Context const & ctx) const
            {
                return boost::phoenix::eval(f, ctx)(help_rvalue_deduction(boost::phoenix::eval(a0, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a1, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a2, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a3, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a4, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a5, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a6, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a7, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a8, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a9, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a10, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a11, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a12, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a13, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a14, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a15, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a16, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a17, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a18, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a19, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a20, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a21, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a22, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a23, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a24, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a25, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a26, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a27, ctx)) , help_rvalue_deduction(boost::phoenix::eval(a28, ctx)));
            }
        
        };
        
    }
    template <typename Dummy>
    struct default_actions::when<detail::rule::function_eval, Dummy>
        : phoenix::call<detail::function_eval>
    {};
}}
