/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@interface ConversationKit.ParticipantsCollectionViewDataSource : NSObject <UICollectionViewDataSource> {

	 onlineParticipants;
	 offlineParticipants;
	 participantIsShownInGrid;
	 didCreateCellForParticipant;

}
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)init;
@end
