/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSSExternalAnalyticsRequestMetadata;

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding> {

	NSURL* _URL;
	NSSExternalAnalyticsRequestMetadata* _metadata;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSSExternalAnalyticsRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSExternalAnalyticsRequestMetadata *)metadata;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 metadata:(id)arg2 ;
@end
