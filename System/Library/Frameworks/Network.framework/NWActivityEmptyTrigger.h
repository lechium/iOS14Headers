/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface NWActivityEmptyTrigger : NSObject {

	unsigned _awdMetricID;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;              //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;               //@synthesize awdMetricID=_awdMetricID - In the implementation block
-(void)setAwdReport:(PBCodable *)arg1 ;
-(id)initWithPBCodableData:(id)arg1 ;
-(unsigned)awdMetricID;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(PBCodable *)awdReport;
@end
