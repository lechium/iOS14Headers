/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface PKPaymentHeroImageModel : NSObject {

	NSURL* _url;
	NSString* _imageSha;

}

@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * imageSha;              //@synthesize imageSha=_imageSha - In the implementation block
-(NSString *)imageSha;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
@end

