/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSArray, NSString;

@interface FTRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RequestStatsResponse* _root;

}

@property (nonatomic,readonly) NSArray * bool_stats; 
@property (nonatomic,readonly) NSArray * int32_stats; 
@property (nonatomic,readonly) NSArray * double_stats; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * request_locale; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)initWithFlatbuffData:(id)arg1 root:(const RequestStatsResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RequestStatsResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RequestStatsResponse*)arg2 ;
-(NSArray *)bool_stats;
-(NSArray *)int32_stats;
-(NSArray *)double_stats;
-(NSString *)request_locale;
-(NSString *)speech_id;
@end
