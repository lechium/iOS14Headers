/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TRIPBUnknownFieldSet : NSObject <NSCopying> {

	CFDictionaryRef fields_;

}
+(BOOL)isFieldTag:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)addField:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)getTags:(int*)arg1 ;
-(id)sortedFields;
-(unsigned long long)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)writeAsMessageSetTo:(id)arg1 ;
-(void)mergeMessageSetMessage:(int)arg1 data:(id)arg2 ;
-(BOOL)mergeFieldFrom:(int)arg1 input:(id)arg2 ;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(void)mergeUnknownFields:(id)arg1 ;
-(unsigned long long)countOfFields;
-(unsigned long long)serializedSizeAsMessageSet;
-(void)mergeVarintField:(int)arg1 value:(int)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 ;
-(id)mutableFieldForNumber:(int)arg1 create:(BOOL)arg2 ;
-(BOOL)hasField:(int)arg1 ;
-(id)getField:(int)arg1 ;
-(void)mergeFromData:(id)arg1 ;
@end

