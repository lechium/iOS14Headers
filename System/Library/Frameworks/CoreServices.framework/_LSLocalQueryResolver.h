/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LSQueryResolving.h>

@class NSString;

@interface _LSLocalQueryResolver : NSObject <_LSQueryResolving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
@end

