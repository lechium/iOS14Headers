/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation
-(unsigned long long)type;
-(BOOL)_execute:(id*)arg1 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(BOOL)_removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3 ;
-(BOOL)_removeSource:(int)arg1 usingTransaction:(id)arg2 ;
-(BOOL)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg1 ;
@end

