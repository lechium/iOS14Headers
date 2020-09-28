/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface ASTErrorStatus : NSObject {

	NSNumber* _code;
	NSString* _reason;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSNumber * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
+(id)errorStatusWithCode:(long long)arg1 ;
-(NSNumber *)code;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(void)setCode:(NSNumber *)arg1 ;
-(id)dictionary;
-(id)reasonForCode:(id)arg1 ;
@end
