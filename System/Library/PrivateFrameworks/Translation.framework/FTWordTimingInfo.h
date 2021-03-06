/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const WordTimingInfo* _root;

}

@property (nonatomic,readonly) NSString * word; 
@property (nonatomic,readonly) unsigned sample_idx; 
@property (nonatomic,readonly) unsigned offset; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) float timestamp; 
-(NSString *)word;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)sample_idx;
-(float)timestamp;
-(unsigned)length;
-(unsigned)offset;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::WordTimingInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 ;
@end

