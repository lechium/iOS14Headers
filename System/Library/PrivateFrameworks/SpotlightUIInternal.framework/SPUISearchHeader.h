/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SPUITextFieldDelegate.h>
#import <UIKit/UITextPasteDelegate.h>

@protocol SPUIHeaderInteractionDelegate, SBIconListLayout, SPUISearchHeaderDelegate;
@class _UILegibilitySettings, UIButton, NSLayoutConstraint, NSString, SPSearchEntity, SPUITextField, UIResponder;

@interface SPUISearchHeader : UIView <SPUITextFieldDelegate, UITextPasteDelegate> {

	BOOL _isReturnKeyPressedInGoMode;
	BOOL _willClear;
	BOOL _searchTextScheduledForProcessing;
	BOOL _offersCompletions;
	id<SPUIHeaderInteractionDelegate> _interactionDelegate;
	_UILegibilitySettings* _legibilitySettings;
	long long _activeInterfaceOrientation;
	UIButton* _cancelButton;
	NSLayoutConstraint* _searchFieldTrailingConstraint;
	NSLayoutConstraint* _cancelButtonTrailingConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _leadingConstraint;
	NSString* _lastSearchText;
	SPSearchEntity* _lastSearchEntity;
	unsigned long long _lastSearchHeaderQueryKind;
	unsigned long long _queryId;
	id<SBIconListLayout> _iconListLayout;
	id<SPUISearchHeaderDelegate> _delegate;
	unsigned long long _suggestionID;
	SPSearchEntity* _searchEntity;
	SPUITextField* _searchField;
	double _blurProgress;

}

@property (retain) UIButton * cancelButton;                                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (retain) NSLayoutConstraint * searchFieldTrailingConstraint;                                  //@synthesize searchFieldTrailingConstraint=_searchFieldTrailingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * cancelButtonTrailingConstraint;                                 //@synthesize cancelButtonTrailingConstraint=_cancelButtonTrailingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * widthConstraint;                                                //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * topConstraint;                                                  //@synthesize topConstraint=_topConstraint - In the implementation block
@property (retain) NSLayoutConstraint * bottomConstraint;                                               //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * leadingConstraint;                                              //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (assign) BOOL willClear;                                                                      //@synthesize willClear=_willClear - In the implementation block
@property (assign) BOOL searchTextScheduledForProcessing;                                               //@synthesize searchTextScheduledForProcessing=_searchTextScheduledForProcessing - In the implementation block
@property (assign) BOOL isReturnKeyPressedInGoMode;                                                     //@synthesize isReturnKeyPressedInGoMode=_isReturnKeyPressedInGoMode - In the implementation block
@property (retain) NSString * lastSearchText;                                                           //@synthesize lastSearchText=_lastSearchText - In the implementation block
@property (retain) SPSearchEntity * lastSearchEntity;                                                   //@synthesize lastSearchEntity=_lastSearchEntity - In the implementation block
@property (assign) unsigned long long lastSearchHeaderQueryKind;                                        //@synthesize lastSearchHeaderQueryKind=_lastSearchHeaderQueryKind - In the implementation block
@property (assign) unsigned long long queryId;                                                          //@synthesize queryId=_queryId - In the implementation block
@property (retain) id<SBIconListLayout> iconListLayout;                                                 //@synthesize iconListLayout=_iconListLayout - In the implementation block
@property (__weak) id<SPUISearchHeaderDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * currentQuery; 
@property (assign,nonatomic,__weak) UIResponder * responderForKeyboardInput; 
@property (assign) unsigned long long suggestionID;                                                     //@synthesize suggestionID=_suggestionID - In the implementation block
@property (nonatomic,retain) SPSearchEntity * searchEntity;                                             //@synthesize searchEntity=_searchEntity - In the implementation block
@property (retain) SPUITextField * searchField;                                                         //@synthesize searchField=_searchField - In the implementation block
@property (assign) BOOL offersCompletions;                                                              //@synthesize offersCompletions=_offersCompletions - In the implementation block
@property (readonly) BOOL optOutOfGoButton; 
@property (readonly) BOOL completionResultIsPotentiallyPunchout; 
@property (assign,nonatomic) double blurProgress;                                                       //@synthesize blurProgress=_blurProgress - In the implementation block
@property (assign,nonatomic) BOOL useInPlaceFilteredBlur; 
@property (assign,nonatomic,__weak) id<SPUIHeaderInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) long long activeInterfaceOrientation;                                      //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL useChunkyMetrics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenFromSearchEntity:(id)arg1 ;
+(unsigned long long)asYouTypeSearchQueryKind;
+(unsigned long long)committedSearchQueryKind;
-(UIButton *)cancelButton;
-(BOOL)optOutOfGoButton;
-(void)dictationButtonPressed;
-(NSString *)currentQuery;
-(id)backdropVisualEffectView;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(id)_searchTextField:(id)arg1 itemProviderForCopyingToken:(id)arg2 ;
-(BOOL)isFirstResponder;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)setIconListLayout:(id<SBIconListLayout>)arg1 ;
-(NSLayoutConstraint *)cancelButtonTrailingConstraint;
-(double)topPadding;
-(BOOL)isOnDarkBackground;
-(void)didMoveToSuperview;
-(void)setIsReturnKeyPressedInGoMode:(BOOL)arg1 ;
-(void)setCancelButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)searchFieldTrailingConstraint;
-(void)commitSearch;
-(BOOL)useInPlaceFilteredBlur;
-(unsigned long long)lastSearchHeaderQueryKind;
-(void)setOffersCompletions:(BOOL)arg1 ;
-(unsigned long long)queryId;
-(BOOL)useChunkyMetrics;
-(void)setBlurProgress:(double)arg1 ;
-(NSString *)lastSearchText;
-(void)setSuggestionID:(unsigned long long)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(BOOL)isReturnKeyPressedInGoMode;
-(void)setResponderForKeyboardInput:(UIResponder *)arg1 ;
-(void)updateBlurProgress;
-(NSLayoutConstraint *)widthConstraint;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)returnKeyPressed;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1 ;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLastSearchText:(NSString *)arg1 ;
-(void)setUseChunkyMetrics:(BOOL)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(BOOL)arg3 queryKind:(unsigned long long)arg4 ;
-(void)textFieldDidBeginEditing;
-(BOOL)offersCompletions;
-(long long)activeInterfaceOrientation;
-(BOOL)cancelButtonIsVisible;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)textFieldShouldReturn;
-(NSLayoutConstraint *)leadingConstraint;
-(id)currentQueryContextWithString:(id)arg1 ;
-(BOOL)lastQueryKindSupportsOptionKey;
-(id)init;
-(void)addInputMethodInformationToQueryContext:(id)arg1 ;
-(void)beginDictation;
-(void)setWillClear:(BOOL)arg1 ;
-(double)horizontalSpacingForChunkyHeight;
-(NSLayoutConstraint *)topConstraint;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)completionResultIsPotentiallyPunchout;
-(void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(BOOL)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setSearchTextScheduledForProcessing:(BOOL)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setDelegate:(id<SPUISearchHeaderDelegate>)arg1 ;
-(void)_searchWithSearchEntity:(id)arg1 fromSuggestion:(BOOL)arg2 ;
-(void)setSearchEntity:(id)arg1 fromSuggestion:(BOOL)arg2 ;
-(UIResponder *)responderForKeyboardInput;
-(void)setSearchField:(SPUITextField *)arg1 ;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)enableDictationIfRequired;
-(BOOL)searchTextScheduledForProcessing;
-(void)searchForSuggestion:(id)arg1 isBuildingQuery:(BOOL)arg2 ;
-(SPSearchEntity *)lastSearchEntity;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(double)bottomPadding;
-(void)updateSearchFieldModel;
-(unsigned long long)suggestionID;
-(void)setLastSearchHeaderQueryKind:(unsigned long long)arg1 ;
-(void)unfocusSearchField;
-(id<SPUISearchHeaderDelegate>)delegate;
-(void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 queryKind:(unsigned long long)arg3 ;
-(void)setLastSearchEntity:(SPSearchEntity *)arg1 ;
-(void)updateFocusResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(BOOL)arg3 ;
-(void)triggerSearchForUnlock;
-(void)focusSearchFieldAndSelectAll:(BOOL)arg1 ;
-(void)setInteractionDelegate:(id<SPUIHeaderInteractionDelegate>)arg1 ;
-(void)didMoveToWindow;
-(SPUITextField *)searchField;
-(id<SBIconListLayout>)iconListLayout;
-(void)focusSearchFieldAndBeginDictation:(BOOL)arg1 selectAll:(BOOL)arg2 ;
-(void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2 ;
-(void)escapeKeyPressed;
-(double)blurProgress;
-(void)setSearchEntity:(SPSearchEntity *)arg1 ;
-(void)performWebSearch;
-(void)setUseInPlaceFilteredBlur:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(BOOL)arg3 sourcePreference:(unsigned long long)arg4 engagedSuggestion:(id)arg5 searchEntities:(id)arg6 queryKind:(unsigned long long)arg7 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(id<SPUIHeaderInteractionDelegate>)interactionDelegate;
-(void)performAction:(/*^block*/id)arg1 afterCommit:(BOOL)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(void)showCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)willClear;
-(void)setSearchFieldTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(SPSearchEntity *)searchEntity;
-(void)switchToSuggestions;
@end
