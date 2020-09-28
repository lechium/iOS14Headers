/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@class NSArray;

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {

	NSArray* _trackInfo;
	NSArray* _playlistInfo;

}
-(unsigned long long)importSource;
-(void)main;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_importTracksUsingImportSession:(ML3ImportSession*)arg1 ;
-(BOOL)_importPlaylistsUsingImportSession:(ML3ImportSession*)arg1 ;
@end
