/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SQProfile : NSObject {

	NSString* _partnerName;
	NSString* _token;

}

@property (nonatomic,copy) NSString * partnerName;              //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy) NSString * token;                    //@synthesize token=_token - In the implementation block
+(id)profileWithPartnerName:(id)arg1 token:(id)arg2 ;
-(NSString *)partnerName;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(void)setPartnerName:(NSString *)arg1 ;
@end
