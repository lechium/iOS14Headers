/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class NSString;

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {

	BOOL _protectedDataAvailable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)get:(id)arg1 ;
+(void)synchronize;
+(void)set:(id)arg1 value:(id)arg2 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)_get:(id)arg1 ;
-(void)_synchronize;
-(id)init;
-(void)_set:(id)arg1 value:(id)arg2 ;
@end
