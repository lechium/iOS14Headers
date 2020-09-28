/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell {

	BOOL _wantsDrawerLayout;
	char _orientation;
	BOOL _shouldConfigureForDarkFSM;
	BOOL _insertingBeforeReplyPreview;
	BOOL _insertingWithReplyPreview;
	BOOL _suppressAnimationsForLineUpdates;
	double _drawerPercentRevealed;
	double _associatedItemOffset;
	long long _insertionType;
	double _insertionDuration;
	double _insertionBeginTime;

}

@property (assign,nonatomic) BOOL wantsDrawerLayout;                                                                       //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) char orientation;                                                                             //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;                                                                 //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
@property (assign,nonatomic) double associatedItemOffset;                                                                  //@synthesize associatedItemOffset=_associatedItemOffset - In the implementation block
@property (assign,nonatomic) BOOL shouldConfigureForDarkFSM;                                                               //@synthesize shouldConfigureForDarkFSM=_shouldConfigureForDarkFSM - In the implementation block
@property (assign,nonatomic) long long insertionType;                                                                      //@synthesize insertionType=_insertionType - In the implementation block
@property (assign,nonatomic) double insertionDuration;                                                                     //@synthesize insertionDuration=_insertionDuration - In the implementation block
@property (assign,nonatomic) double insertionBeginTime;                                                                    //@synthesize insertionBeginTime=_insertionBeginTime - In the implementation block
@property (assign,nonatomic) BOOL insertingBeforeReplyPreview;                                                             //@synthesize insertingBeforeReplyPreview=_insertingBeforeReplyPreview - In the implementation block
@property (assign,nonatomic) BOOL insertingWithReplyPreview;                                                               //@synthesize insertingWithReplyPreview=_insertingWithReplyPreview - In the implementation block
@property (assign,getter=suppressesAnimationsForLineUpdates,nonatomic) BOOL suppressAnimationsForLineUpdates;              //@synthesize suppressAnimationsForLineUpdates=_suppressAnimationsForLineUpdates - In the implementation block
-(double)drawerPercentRevealed;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(double)insertionBeginTime;
-(double)insertionDuration;
-(BOOL)insertingWithReplyPreview;
-(BOOL)shouldConfigureForDarkFSM;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)prepareForReuse;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)performReveal:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(char)orientation;
-(void)clearFilters;
-(BOOL)wantsDrawerLayout;
-(void)setOrientation:(char)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)setShouldConfigureForDarkFSM:(BOOL)arg1 ;
-(void)setWantsDrawerLayout:(BOOL)arg1 ;
-(void)setAssociatedItemOffset:(double)arg1 ;
-(void)setInsertionDuration:(double)arg1 ;
-(void)setInsertionBeginTime:(double)arg1 ;
-(void)setSuppressAnimationsForLineUpdates:(BOOL)arg1 ;
-(void)setInsertionType:(long long)arg1 ;
-(void)setInsertingWithReplyPreview:(BOOL)arg1 ;
-(void)setInsertingBeforeReplyPreview:(BOOL)arg1 ;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(double)associatedItemOffset;
-(BOOL)insertingBeforeReplyPreview;
-(BOOL)suppressesAnimationsForLineUpdates;
-(long long)insertionType;
@end
