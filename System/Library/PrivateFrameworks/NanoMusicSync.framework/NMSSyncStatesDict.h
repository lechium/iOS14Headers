/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface NMSSyncStatesDict : NSObject <NSCopying> {

	NSMutableDictionary* _syncStatesDict;
	NSMutableDictionary* _waitingSubstatesDict;

}
+(id)assetTypeForMediaType:(unsigned long long)arg1 ;
+(unsigned long long)mediaTypeForAssetType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWaitingSubstate:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
-(unsigned long long)waitingSubstateForMediaType:(unsigned long long)arg1 ;
-(void)setSyncState:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
-(id)init;
-(void)setSyncStateForAllMediaTypes:(unsigned long long)arg1 ;
-(id)syncStateDictionaryRepresentation;
-(unsigned long long)syncStateForMediaType:(unsigned long long)arg1 ;
-(id)waitingSubstateDictionaryRepresentation;
-(id)description;
-(void)setWaitingSubstateForAllMediaTypes:(unsigned long long)arg1 ;
@end

