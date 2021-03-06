/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKitCore/_UICollectionViewListCellReorderControlDelegate.h>
#import <UIKit/UITableConstantsCellProviding.h>

@protocol UITableConstants;
@class _UICollectionViewListCellVisualProvider, NSDictionary, NSArray, NSLayoutConstraint, UILayoutGuide, UICellAccessoryManager, UIView, NSString;

@interface UICollectionViewListCell : UICollectionViewCell <_UICollectionViewListCellReorderControlDelegate, UITableConstantsCellProviding> {

	struct {
		unsigned style : 3;
		unsigned isStyledAsHeader : 1;
		unsigned forceHeaderStylingDueToSPIOutlineDisclosureAccessory : 1;
		unsigned selectionStyle : 1;
		unsigned expanded : 1;
		unsigned needsUpdateAccessories : 1;
		unsigned hasCustomIndentationLevel : 1;
		unsigned hasCustomIndentationWidth : 1;
		unsigned cellSelectionTogglesExpansionState : 1;
		unsigned indentsAccessories : 1;
		unsigned separatorLayoutGuideLeadingReferencesPrimaryText : 1;
	}  _listCellFlags;
	_UICollectionViewListCellVisualProvider* _visualProvider;
	NSDictionary* _accessoriesByIdentifier;
	double _extraLeadingLayoutMarginForIndentation;
	NSArray* _contentViewConstraints;
	NSLayoutConstraint* _separatorLayoutGuideHeightConstraint;
	NSLayoutConstraint* _separatorLayoutGuideLeadingConstraint;
	NSLayoutConstraint* _separatorLayoutGuideTrailingConstraint;
	UILayoutGuide* _separatorLayoutGuide;
	NSArray* _accessories;
	NSArray* _leadingAccessoryConfigurations;
	NSArray* _trailingAccessoryConfigurations;
	NSArray* _leadingEditingAccessoryConfigurations;
	NSArray* _trailingEditingAccessoryConfigurations;
	long long _indentationLevel;
	double _indentationWidth;
	id<UITableConstants> _constants;
	UICellAccessoryManager* _accessoryManager;
	long long _defaultIndentationLevel;
	id _itemIdentifier;
	/*^block*/id _disclosureWasTappedHandler;

}

@property (nonatomic,copy) NSArray * leadingAccessoryConfigurations;                                                                             //@synthesize leadingAccessoryConfigurations=_leadingAccessoryConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * trailingAccessoryConfigurations;                                                                            //@synthesize trailingAccessoryConfigurations=_trailingAccessoryConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * leadingEditingAccessoryConfigurations;                                                                      //@synthesize leadingEditingAccessoryConfigurations=_leadingEditingAccessoryConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * trailingEditingAccessoryConfigurations;                                                                     //@synthesize trailingEditingAccessoryConfigurations=_trailingEditingAccessoryConfigurations - In the implementation block
@property (getter=_owningViewForSeparatorLayoutGuide,nonatomic,readonly) UIView * owningViewForSeparatorLayoutGuide; 
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants;                                                                 //@synthesize constants=_constants - In the implementation block
@property (assign,setter=_setExpanded:,getter=_expanded,nonatomic) BOOL _expanded; 
@property (getter=_accessoryManager,nonatomic,readonly) UICellAccessoryManager * accessoryManager;                                               //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (assign,setter=_setDefaultIndentationLevel:,getter=_defaultIndentationLevel,nonatomic) long long defaultIndentationLevel;              //@synthesize defaultIndentationLevel=_defaultIndentationLevel - In the implementation block
@property (setter=_setItemIdentifier:,getter=_itemIdentifier,nonatomic,retain) id itemIdentifier;                                                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) id disclosureWasTappedHandler;                                                                                        //@synthesize disclosureWasTappedHandler=_disclosureWasTappedHandler - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                                                                                         //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,nonatomic) double indentationWidth;                                                                                            //@synthesize indentationWidth=_indentationWidth - In the implementation block
@property (assign,nonatomic) BOOL indentsAccessories; 
@property (nonatomic,copy) NSArray * accessories;                                                                                                //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * separatorLayoutGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_minimumCellAccessoryMargin,nonatomic,readonly) double minimumCellAccessoryMargin; 
@property (getter=_cellStyle,nonatomic,readonly) long long cellStyle; 
+(id)_createVisualProviderForCell:(id)arg1 ;
+(id)_createDefaultContentViewWithFrame:(CGRect)arg1 ;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(void)_updateSystemTypeAccessoryView:(id)arg1 withCellAccessory:(id)arg2 orConfiguration:(id)arg3 usingState:(id)arg4 ;
-(void)_applyCellAccessoriesToNormalConfiguration:(id)arg1 editingConfiguration:(id)arg2 ;
-(id)_createSystemTypeAccessoryViewWithCellAccessory:(id)arg1 orConfiguration:(id)arg2 ;
-(UIEdgeInsets)_adjustedRawLayoutMargins:(UIEdgeInsets)arg1 withLeadingLayoutMarginAdjustment:(double)arg2 ;
-(id)_cellAccessoryForConfiguration:(id)arg1 isLeadingEdge:(BOOL)arg2 usingState:(id)arg3 ;
-(void)_updateSeparatorLayoutGuideForSectionSeparatorInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)_updateCurrentSystemTypeAccessoryViewsUsingState:(id)arg1 ;
-(BOOL)_removesHighlightedAndSelectedStatesForBackground;
-(BOOL)_shouldIncreaseCellLeadingLayoutMarginForIndentation;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)selectionStyle;
-(void)prepareForReuse;
-(BOOL)_expanded;
-(id)_cellAccessoriesForConfigurations:(id)arg1 isLeadingEdge:(BOOL)arg2 ;
-(NSDirectionalEdgeInsets)_sectionSeparatorInsetsFromLayoutAttributes:(id)arg1 ;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(id)_itemIdentifier;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_reorderControlDidEndReordering:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)setTrailingEditingAccessoryConfigurations:(NSArray *)arg1 ;
-(void)_updateCellSelectionTogglesExpansionState;
-(void)setLeadingEditingAccessoryConfigurations:(NSArray *)arg1 ;
-(void)_updateLeadingLayoutMarginForIndentation;
-(void)_setDefaultIndentationLevel:(long long)arg1 ;
-(void)_resetRawLayoutMargins;
-(id)_internalAccessoriesForCellAccessories:(id)arg1 ;
-(void)_deleteAccessoryTriggered;
-(void)_toggleExpansionState;
-(BOOL)indentsAccessories;
-(NSArray *)accessories;
-(void)_updateConfigurationUsingState:(id)arg1 ;
-(void)_setIndentationLevel:(long long)arg1 ;
-(long long)_defaultFocusStyle;
-(void)_setIndentationWidth:(double)arg1 ;
-(BOOL)_contentViewShouldBeIndented;
-(id)_owningViewForSeparatorLayoutGuide;
-(UILayoutGuide *)separatorLayoutGuide;
-(long long)_cellStyle;
-(BOOL)_reorderControlShouldBeginReordering:(id)arg1 ;
-(void)_reorderControlDidBeginReordering:(id)arg1 ;
-(void)_reorderControl:(id)arg1 didUpdateWithOffset:(CGPoint)arg2 ;
-(id)_editingControlTintColorForStyle:(long long)arg1 ;
-(double)_minimumCellAccessoryMargin;
-(void)_createAccessoryManager;
-(id)defaultContentConfiguration;
-(id)_defaultBackgroundConfiguration;
-(id)_defaultBackgroundView;
-(id)_defaultSelectedBackgroundView;
-(BOOL)_isFocusableWhenStyledAsHeader;
-(BOOL)_canFocusProgrammatically;
-(void)_configureFocusedFloatingContentView:(id)arg1 ;
-(void)setLeadingAccessoryConfigurations:(NSArray *)arg1 ;
-(NSArray *)leadingAccessoryConfigurations;
-(void)setTrailingAccessoryConfigurations:(NSArray *)arg1 ;
-(NSArray *)trailingAccessoryConfigurations;
-(NSArray *)leadingEditingAccessoryConfigurations;
-(NSArray *)trailingEditingAccessoryConfigurations;
-(BOOL)_hasCustomSelectionAction;
-(BOOL)_performCustomSelectionAction;
-(void)setIndentsAccessories:(BOOL)arg1 ;
-(void)setIndentationWidth:(double)arg1 ;
-(id)_viewForMultiSelectAccessory;
-(long long)_defaultIndentationLevel;
-(id)disclosureWasTappedHandler;
-(id)_constants;
-(long long)_tableStyle;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)_contentViewInset;
-(void)_setExpanded:(BOOL)arg1 ;
-(long long)indentationLevel;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateConstants;
-(id)configurationState;
-(void)_setItemIdentifier:(id)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(id)_accessoryManager;
-(double)indentationWidth;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(BOOL)_cellSelectionTogglesExpansionState;
-(void)_updateAccessoryLayoutMetrics;
-(void)_layoutAccessoriesAndContentView;
-(void)_setContentView:(id)arg1 addToHierarchy:(BOOL)arg2 ;
-(void)_setRawLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_updateContentViewConstraintsIfNeeded;
-(void)_updateAccessoriesIfNeeded;
-(void)_updateSeparatorLayoutGuideHeight;
-(void)_setNeedsUpdateAccessories;
-(void)_constantsDidChange;
-(double)_leadingIndentation;
-(long long)_styleFromLayoutAttributes:(id)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_updateDefaultIndentationWidth;
-(NSDirectionalEdgeInsets)_separatorInsetsFromLayoutGuide;
-(BOOL)_isAccompaniedSidebar;
-(void)setDisclosureWasTappedHandler:(id)arg1 ;
@end

