/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetArtworkMessage, NSData, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetArtworkMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * jpegArtwork; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(NSNumber *)originIdentifier;
-(id)initWithProtobufData:(id)arg1 ;
-(NSDate *)serializationDate;
-(id)protobufData;
-(NSData *)originalDigest;
-(id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(NSData *)jpegArtwork;
@end
