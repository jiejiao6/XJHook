// Copyright - Baptiste Lepilleur
 // Distributed under MIT license, or public domain if desired and
 // recognized in your jurisdiction.
 // See file LICENSE for detail or copy at http://jsoncpp.sourceforge.net/LICENSE

 #ifndef CPPTL_JSON_FEATURES_H_INCLUDED
 # define CPPTL_JSON_FEATURES_H_INCLUDED

 #if !defined(JSON_IS_AMALGAMATION)
 # include "forwards.h"
 #endif // if !defined(JSON_IS_AMALGAMATION)

 namespace Json {
    
        class JSON_API Features
        {
        public:
           static Features all();
    
           static Features strictMode();
    
           Features();
    
           bool allowComments_;
    
           bool strictRoot_;
        };

 } // namespace Json

 #endif // CPPTL_JSON_FEATURES_H_INCLUDED