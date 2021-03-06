/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRLyricsEventProtobuf;

@interface _MRSendLyricsEventMessageProtobuf : PBCodable <NSCopying> {

	_MRLyricsEventProtobuf* _event;

}

@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) _MRLyricsEventProtobuf * event;              //@synthesize event=_event - In the implementation block
-(void)setEvent:(_MRLyricsEventProtobuf *)arg1 ;
-(_MRLyricsEventProtobuf *)event;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasEvent;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

