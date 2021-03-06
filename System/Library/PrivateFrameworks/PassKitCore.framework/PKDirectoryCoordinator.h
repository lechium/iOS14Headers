/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidateObservable.h>

@class NSURL, NSString;

@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable> {

	os_unfair_lock_s _lock;
	AB _invalidated;
	NSURL* _url;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)invalidate;
-(void)performCoordinatedAction:(/*^block*/id)arg1 ;
-(id)init;
@end

