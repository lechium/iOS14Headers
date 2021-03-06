/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRPlayerPath;

@interface MRPlayerPathDictionaryKey : NSObject <NSCopying> {

	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(id)dictionaryKeyWithPlayerPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MRPlayerPath *)playerPath;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

