/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKBaseComposeController.h>

@class GKComposeHeaderWithStaticRecipients, NSString, NSArray;

@interface GKSimpleComposeController : GKBaseComposeController {

	GKComposeHeaderWithStaticRecipients* _toField;
	NSString* _defaultMessage;
	NSArray* _players;
	/*^block*/id _doneHandler;

}

@property (nonatomic,retain) GKComposeHeaderWithStaticRecipients * toField;              //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) NSString * defaultMessage;                                  //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) NSArray * players;                                          //@synthesize players=_players - In the implementation block
@property (nonatomic,copy) id doneHandler;                                               //@synthesize doneHandler=_doneHandler - In the implementation block
-(NSArray *)players;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)setDoneHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)setToField:(GKComposeHeaderWithStaticRecipients *)arg1 ;
-(void)setupSendButton;
-(id)doneHandler;
-(NSString *)defaultMessage;
-(void)pushOntoNavigationController:(id)arg1 withDoneHandler:(/*^block*/id)arg2 ;
-(void)setDefaultMessage:(NSString *)arg1 ;
-(GKComposeHeaderWithStaticRecipients *)toField;
-(void)donePressed;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

