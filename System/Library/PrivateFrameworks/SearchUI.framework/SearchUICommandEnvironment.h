/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SearchUIFeedbackDelegate, SearchUIResultsViewDelegate, SearchUIShowMoreSectionsDelegate;
@class NSString, UIViewController, UIView;

@interface SearchUICommandEnvironment : NSObject <NSCopying> {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _shouldUseStandardSectionInsets;
	BOOL _threeDTouchEnabled;
	BOOL _isPop;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	id<SearchUIResultsViewDelegate> _resultsViewDelegate;
	id<SearchUIShowMoreSectionsDelegate> _showMoreSectionsDelegate;
	long long _selectableGridPunchoutIndex;
	NSString* _searchString;
	NSString* _sectionTitle;
	UIViewController* _presentingViewController;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;                              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;                        //@synthesize resultsViewDelegate=_resultsViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIShowMoreSectionsDelegate> showMoreSectionsDelegate;              //@synthesize showMoreSectionsDelegate=_showMoreSectionsDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                                                //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets;                                               //@synthesize shouldUseStandardSectionInsets=_shouldUseStandardSectionInsets - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                                                           //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (assign,nonatomic) BOOL isPop;                                                                        //@synthesize isPop=_isPop - In the implementation block
@property (assign,nonatomic) long long selectableGridPunchoutIndex;                                             //@synthesize selectableGridPunchoutIndex=_selectableGridPunchoutIndex - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                             //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSString * sectionTitle;                                                             //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                                       //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                               //@synthesize sourceView=_sourceView - In the implementation block
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(BOOL)isPop;
-(UIView *)sourceView;
-(id<SearchUIShowMoreSectionsDelegate>)showMoreSectionsDelegate;
-(NSString *)searchString;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setShowMoreSectionsDelegate:(id<SearchUIShowMoreSectionsDelegate>)arg1 ;
-(long long)selectableGridPunchoutIndex;
-(id)init;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(BOOL)shouldUseStandardSectionInsets;
-(void)setSearchString:(NSString *)arg1 ;
-(id<SearchUIResultsViewDelegate>)resultsViewDelegate;
-(void)setResultsViewDelegate:(id<SearchUIResultsViewDelegate>)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setIsPop:(BOOL)arg1 ;
-(void)setSelectableGridPunchoutIndex:(long long)arg1 ;
-(BOOL)threeDTouchEnabled;
@end

