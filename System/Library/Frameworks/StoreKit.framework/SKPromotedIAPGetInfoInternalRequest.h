/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPGetInfoInternalRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(void)_start;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)bundleId;
-(id)completionHandler;
-(void)_handleReply:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
