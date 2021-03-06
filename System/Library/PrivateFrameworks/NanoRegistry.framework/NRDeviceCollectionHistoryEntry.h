/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying> {

	unsigned _switchIndex;
	unsigned long long _index;
	NSDate* _date;
	NRDeviceCollectionDiff* _diff;
	NRDeviceCollectionHistory* _historyManager;

}

@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NRDeviceCollectionDiff * diff; 
@property (nonatomic,readonly) NRMutableDeviceCollection * state; 
@property (nonatomic,readonly) unsigned switchIndex; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistoryEntry * protobuf; 
+(BOOL)supportsSecureCoding;
-(NRDeviceCollectionDiff *)diff;
-(NRPBDeviceCollectionHistoryEntry *)protobuf;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned)arg5 ;
-(NSDate *)date;
-(unsigned long long)index;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)switchIndex;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NRMutableDeviceCollection *)state;
-(id)description;
@end

