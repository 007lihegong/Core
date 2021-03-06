//
//  TKDebug.h
//  TapKit
//
//  Created by Wu Kevin on 4/26/13.
//  Copyright (c) 2013 Telligenty. All rights reserved.
//

#ifdef DEBUG
#define TKPRINT(__fmt, ...) NSLog(@"%s: "__fmt, __PRETTY_FUNCTION__, ##__VA_ARGS__)
#else
#define TKPRINT(__fmt, ...) ((void)0)
#endif // #ifdef DEBUG

#ifdef DEBUG
#define TKASSERT(__value) { if ( !(__value) ) { NSLog(@"%s: *ASSERT(%s)", __PRETTY_FUNCTION__, #__value); } } ((void)0)
#else
#define TKASSERT(__value) ((void)0)
#endif // #ifdef DEBUG


#ifdef DEBUG
#define TKERROR(__info) NSLog(@"%s: *ERROR(%@)", __PRETTY_FUNCTION__, __info)
#else
#define TKERROR(__info) ((void)0)
#endif // #ifdef DEBUG


#ifdef DEBUG
#define TKPRINTMETHOD() NSLog(@"%s", __PRETTY_FUNCTION__)
#else
#define TKPRINTMETHOD() ((void)0)
#endif // #ifdef DEBUG


#ifdef DEBUG
#define TKTESTVALUE(__value, __info) { id __result = (__value) ? @"YES" : @"NO"; NSLog(@"%s: %@ is %@", __PRETTY_FUNCTION__, __info, __result); }
#else
#define TKTESTVALUE(__value, __info) ((void)0)
#endif // #ifdef DEBUG
