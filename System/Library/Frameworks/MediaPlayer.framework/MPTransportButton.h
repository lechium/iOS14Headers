/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPButton.h>

@class MPAVController;

@interface MPTransportButton : MPButton {

	MPAVController* player;

}

@property (nonatomic,retain) MPAVController * player; 
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(id)_automationID;
@end

