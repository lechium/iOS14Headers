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

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationRequest* _root;

}

@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * task; 
@property (nonatomic,readonly) NSString * source_language; 
@property (nonatomic,readonly) NSString * target_language; 
@property (nonatomic,readonly) NSArray * paragraphs; 
@property (nonatomic,readonly) NSString * app_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * url; 
@property (nonatomic,readonly) long long opt_in_status; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)task;
-(NSString *)app_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchTranslationRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationRequest*)arg2 ;
-(NSString *)request_id;
-(NSString *)session_id;
-(NSArray *)paragraphs;
-(NSString *)source_language;
-(NSString *)target_language;
-(NSString *)url;
-(long long)opt_in_status;
@end

