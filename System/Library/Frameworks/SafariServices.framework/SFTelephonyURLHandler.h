/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SFTelephonyURLHandler : NSObject {

	NSMutableSet* _pendingRequests;

}

@property (nonatomic,retain) NSMutableSet * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)sharedInstance;
-(void)setPendingRequests:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingRequests;
-(void)addObserverForRequest:(id)arg1 ;
-(void)removeObserverForRequest:(id)arg1 ;
-(id)init;
-(BOOL)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
