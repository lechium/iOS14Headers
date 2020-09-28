/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableConstantsHeaderFooterProviding.h>
#import <UIKit/UITableViewSubviewReusing.h>

@protocol _UIContentViewInternal, UITableConstants, UITable;
@class NSString, UIImage, UIView, _UITableViewHeaderFooterViewLabel, _UISystemBackgroundView, UITableView, _UIBackgroundViewConfiguration, UIViewConfigurationState, UILabel, UIBackgroundConfiguration;

@interface UITableViewHeaderFooterView : UIView <UITableConstantsHeaderFooterProviding, UITableViewSubviewReusing> {

	long long _tableViewStyle;
	UIImage* _backgroundImage;
	CGRect _frame;
	long long _textAlignment;
	double _maxTitleWidth;
	NSString* _reuseIdentifier;
	UIView* _backgroundView;
	_UITableViewHeaderFooterViewLabel* _label;
	_UITableViewHeaderFooterViewLabel* _detailLabel;
	UIView* _contentView;
	double _leadingMarginWidth;
	double _trailingMarginWidth;
	NSString* _contentViewConfigurationIdentifier;
	id<_UIContentViewInternal> _viewForContentConfiguration;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	id<UITableConstants> _constants;
	struct {
		unsigned isHeader : 1;
		unsigned labelBackgroundColorNeedsUpdate : 1;
		unsigned detailLabelBackgroundColorNeedsUpdate : 1;
		unsigned floating : 1;
		unsigned stripPadding : 1;
		unsigned isTopHeader : 1;
		unsigned didSetSectionHeader : 1;
		unsigned didSetupDefaults : 1;
		unsigned insetsContentViewsToSafeArea : 1;
		unsigned tableViewHasBeenExplicitlySet : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
	}  _headerFooterFlags;
	id<UITable> _table;

}

@property (getter=_effectiveSafeAreaInsets,nonatomic,readonly) UIEdgeInsets effectiveSafeAreaInsets; 
@property (assign,nonatomic,__weak) id<UITable> table;                                                                                                                                                               //@synthesize table=_table - In the implementation block
@property (nonatomic,copy) NSString * reuseIdentifier;                                                                                                                                                               //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setMarginWidth:,getter=_marginWidth,nonatomic) double marginWidth; 
@property (assign,setter=_setRightMarginWidth:,getter=_rightMarginWidth,nonatomic) double rightMarginWidth; 
@property (assign,setter=_setInsetsContentViewsToSafeArea:,getter=_insetsContentViewsToSafeArea,nonatomic) BOOL insetsContentViewsToSafeArea; 
@property (assign,setter=_setStripPadding:,getter=_stripPadding,nonatomic) BOOL stripPadding; 
@property (assign,setter=_setTopHeader:,getter=_isTopHeader,nonatomic) BOOL topHeader; 
@property (setter=_setConstants:,getter=_constants,nonatomic,retain) id<UITableConstants> constants; 
@property (assign,nonatomic) BOOL floating; 
@property (assign,nonatomic) long long tableViewStyle; 
@property (nonatomic,retain) UIImage * backgroundImage;                                                                                                                                                              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL sectionHeader; 
@property (assign,nonatomic,__weak) UITableView * tableView; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double maxTitleWidth;                                                                                                                                                                   //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (setter=_setContentViewConfiguration:,getter=_contentViewConfiguration,nonatomic,copy) id<_UIContentViewConfiguration> _contentViewConfiguration; 
@property (assign,setter=_setAutomaticallyUpdatesContentViewConfiguration:,getter=_automaticallyUpdatesContentViewConfiguration,nonatomic) BOOL _automaticallyUpdatesContentViewConfiguration; 
@property (setter=_setContentViewConfigurationProvider:,getter=_contentViewConfigurationProvider,nonatomic,copy) id _contentViewConfigurationProvider; 
@property (setter=_setBackgroundViewConfiguration:,getter=_backgroundViewConfiguration,nonatomic,copy) _UIBackgroundViewConfiguration * _backgroundViewConfiguration; 
@property (setter=_setBackgroundViewConfigurationProvider:,getter=_backgroundViewConfigurationProvider,nonatomic,copy) id _backgroundViewConfigurationProvider; 
@property (assign,setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:,getter=_automaticallyUpdatesBackgroundViewConfiguration,nonatomic) BOOL _automaticallyUpdatesBackgroundViewConfiguration; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
@property (nonatomic,readonly) UIViewConfigurationState * configurationState; 
@property (nonatomic,copy) id<UIContentConfiguration> contentConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesContentConfiguration; 
@property (nonatomic,readonly) UIView * contentView;                                                                                                                                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,copy) UIBackgroundConfiguration * backgroundConfiguration; 
@property (assign,nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultPlainHeaderFooterFont;
+(id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(id)_defaultFontForHeaderFooterView:(id)arg1 ;
+(double)defaultHeaderHeightForStyle:(long long)arg1 ;
+(id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(double)defaultFooterHeightForStyle:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_updateBackgroundView;
-(void)setTextAlignment:(long long)arg1 ;
-(id<UITable>)table;
-(UIView *)contentView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(double)maxTitleWidth;
-(void)layoutMarginsDidChange;
-(BOOL)floating;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(long long)textAlignment;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)didMoveToSuperview;
-(void)_setStripPadding:(BOOL)arg1 ;
-(void)_setTopHeader:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)_defaultTextColor;
-(id)_label:(BOOL)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(CGRect)_detailLabelFrame;
-(BOOL)_isTransparentFocusRegion;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(double)_marginWidth;
-(UIImage *)backgroundImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_isTopHeader;
-(NSString *)text;
-(void)setTintColor:(id)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3 ;
-(void)prepareForReuse;
-(void)setAutomaticallyUpdatesBackgroundConfiguration:(BOOL)arg1 ;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(void)setTable:(id<UITable>)arg1 ;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2 ;
-(NSString *)reuseIdentifier;
-(UIEdgeInsets)_insetsToBounds;
-(CGRect)_backgroundRect;
-(UIEdgeInsets)_insetsToContentRect;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(double)_rightMarginWidth;
-(void)setText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_invalidateDetailLabelBackgroundColor;
-(void)_updateContentAndBackgroundView;
-(void)_setContentView:(id)arg1 insertAtBack:(BOOL)arg2 ;
-(BOOL)_isSourceListOrMacIdiom;
-(CGSize)_textSizeForWidth:(double)arg1 ;
-(CGRect)_contentRectForWidth:(double)arg1 ;
-(void)_updateBackgroundImage;
-(void)_setupDefaultsIfNecessary;
-(BOOL)_useDetailText;
-(void)_setupLabelForSourceList:(id)arg1 ;
-(void)_updateDetailLabelBackgroundColor;
-(BOOL)_stripPadding;
-(CGSize)_detailTextSizeForWidth:(double)arg1 ;
-(id)_customViewForDefaultBackgroundAppearance;
-(CGSize)_sizeThatFits:(CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3 ;
-(BOOL)_tintColorAffectsBackgroundColor;
-(CGRect)_backgroundRectForWidth:(double)arg1 ;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(void)setAutomaticallyUpdatesContentConfiguration:(BOOL)arg1 ;
-(void)_invalidateLabelBackgroundColor;
-(void)_resetContentViews;
-(BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
-(id<UIContentConfiguration>)contentConfiguration;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(id<_UIContentViewConfiguration>)_contentViewConfiguration;
-(BOOL)_usingBackgroundViewConfiguration;
-(void)_resetBackgroundViewsAndColor;
-(void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1 ;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(long long)tableViewStyle;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(void)_updateBackgroundViewConfigurationForState:(id)arg1 ;
-(void)_updateContentViewConfigurationForState:(id)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)_layoutSystemBackgroundView;
-(void)_resetBackgroundViewConfiguration;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(void)setContentConfiguration:(id<UIContentConfiguration>)arg1 ;
-(BOOL)automaticallyUpdatesContentConfiguration;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(id)_contentViewConfigurationProvider;
-(UIView *)backgroundView;
-(id)defaultContentConfiguration;
-(BOOL)_isFloating;
-(id)_defaultBackgroundConfiguration;
-(BOOL)automaticallyUpdatesBackgroundConfiguration;
-(void)setNeedsUpdateConfiguration;
-(CGRect)_labelFrame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1 ;
-(id)_constants;
-(CGRect)_contentRect;
-(UIBackgroundConfiguration *)backgroundConfiguration;
-(_UIBackgroundViewConfiguration *)_backgroundViewConfiguration;
-(BOOL)sectionHeader;
-(id)initWithCoder:(id)arg1 ;
-(void)setNeedsUpdateConstraints;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)_insetsContentViewsToSafeArea;
-(UIViewConfigurationState *)configurationState;
-(void)_setMarginWidth:(double)arg1 ;
-(void)setSectionHeader:(BOOL)arg1 ;
-(UILabel *)detailTextLabel;
-(id)_table;
-(void)setMaxTitleWidth:(double)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(void)_setConstants:(id)arg1 ;
-(id)_configurationState;
-(void)_setupBackgroundView;
-(void)_setTableViewStyle:(long long)arg1 updateFrame:(BOOL)arg2 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(void)_setupLabelAppearance;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)_updateDefaultBackgroundAppearance;
-(void)_setNeedsConfigurationStateUpdate;
-(id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(UILabel *)textLabel;
@end
