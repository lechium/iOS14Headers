/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BMStoreData <NSObject>
@property (nonatomic,readonly) unsigned dataVersion; 
@optional
-(id)json;

@required
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2;
-(id)serialize;
-(unsigned)dataVersion;
-(id)init;

@end
