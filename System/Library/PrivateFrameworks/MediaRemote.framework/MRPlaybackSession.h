/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSession : NSObject {

	NSString* _identifier;
	NSString* _type;
	NSData* _playbackSessionData;

}

@property (nonatomic,readonly) _MRPlaybackSessionProtobuf * protobuf; 
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * playbackSessionData;                           //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
-(_MRPlaybackSessionProtobuf *)protobuf;
-(NSString *)identifier;
-(NSData *)playbackSessionData;
-(NSData *)data;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)type;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 playbackSessionData:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPlaybackSessionData:(NSData *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
