/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>

@protocol CKConversationListEmbeddedCollectionViewCellDelegate;
@class NSObject, UITableViewCell;

@interface CKConversationListEmbeddedCollectionViewCell : _UICollectionViewListCell {

	BOOL _shouldUseSidebarBackgroundConfiguration;
	NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate> _embeddedCellDelegate;
	unsigned long long _editingMode;
	UITableViewCell* _embeddedTableViewCell;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate> embeddedCellDelegate;              //@synthesize embeddedCellDelegate=_embeddedCellDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long editingMode;                                                                           //@synthesize editingMode=_editingMode - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSidebarBackgroundConfiguration;                                                             //@synthesize shouldUseSidebarBackgroundConfiguration=_shouldUseSidebarBackgroundConfiguration - In the implementation block
@property (nonatomic,retain) UITableViewCell * embeddedTableViewCell;                                                                  //@synthesize embeddedTableViewCell=_embeddedTableViewCell - In the implementation block
+(Class)_contentViewClass;
+(Class)embeddedTableViewCellClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableViewCell *)embeddedTableViewCell;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)prepareForReuse;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(unsigned long long)editingMode;
-(id)configurationState;
-(void)forwardStateToEmbeddedCell:(unsigned long long)arg1 ;
-(void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_viewConfigurationState;
-(void)setEditingMode:(unsigned long long)arg1 ;
-(void)setShouldUseSidebarBackgroundConfiguration:(BOOL)arg1 ;
-(id)leadingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)arg1 ;
-(id)trailingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)arg1 ;
-(void)setEmbeddedCellDelegate:(NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate>)arg1 ;
-(id)pinButtonView;
-(void)setEmbeddedTableViewCell:(UITableViewCell *)arg1 ;
-(BOOL)shouldUseSidebarBackgroundConfiguration;
-(id)multiselectCellAccessoryConfiguration;
-(id)insertCellAccessoryConfiguration;
-(void)pinButtonTapped:(id)arg1 ;
-(NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate>)embeddedCellDelegate;
@end

