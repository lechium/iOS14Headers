/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@class MSASAlbum, NSString;

@interface MSASPersonModelItem : NSObject <NSCopying> {

	int _errorCount;
	MSASAlbum* _album;
	NSString* _albumGUID;
	id<NSObject> _object;

}

@property (assign,nonatomic) int errorCount;                    //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                 //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;              //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) id<NSObject> object;               //@synthesize object=_object - In the implementation block
-(void)setErrorCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id<NSObject>)arg1 ;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)albumGUID;
-(int)errorCount;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(id<NSObject>)object;
-(MSASAlbum *)album;
@end

