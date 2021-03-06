/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXUserDefaultsDataSource;
@class NSNumber, NSDate;

@interface PXUserDefaults : NSObject {

	NSNumber* _allPhotosColumns;
	NSNumber* _curatedLibraryZoomLevel;
	NSNumber* _daysMarginScale;
	NSNumber* _allPhotosCaptionsVisible;
	NSNumber* _allPhotosPreferredIndividualItemsColumns;
	NSNumber* _allPhotosAspectFit;
	NSNumber* _allPhotosAspectFitInCompact;
	NSNumber* _photosGridColumns;
	NSNumber* _photosGridPreferredIndividualItemsColumns;
	NSNumber* _photosGridAspectFit;
	NSNumber* _photosGridAspectFitInCompact;
	NSNumber* _didShowCurationFooter;
	NSNumber* _didShowCompletedCurationFooterAnimation;
	NSNumber* _lastRadarPromptAnsweredQuestionCount;
	NSDate* _lastSurveyQuestionsRadarPromptDate;
	NSDate* _surveyQuestionsHideDate;
	NSNumber* _axExposeAllVisibleElements;
	id<PXUserDefaultsDataSource> _dataSource;

}

@property (nonatomic,readonly) id<PXZoomablePhotosUserDefaults> curatedLibraryUserDefaults; 
@property (nonatomic,readonly) id<PXZoomablePhotosUserDefaults> photosGridsUserDefaults; 
@property (nonatomic,__weak,readonly) id<PXUserDefaultsDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSNumber * curatedLibraryZoomLevel;                                           //@synthesize curatedLibraryZoomLevel=_curatedLibraryZoomLevel - In the implementation block
@property (nonatomic,copy) NSNumber * daysMarginScale;                                                   //@synthesize daysMarginScale=_daysMarginScale - In the implementation block
@property (nonatomic,copy) NSNumber * allPhotosCaptionsVisible;                                          //@synthesize allPhotosCaptionsVisible=_allPhotosCaptionsVisible - In the implementation block
@property (nonatomic,copy) NSNumber * allPhotosColumns;                                                  //@synthesize allPhotosColumns=_allPhotosColumns - In the implementation block
@property (nonatomic,copy) NSNumber * allPhotosPreferredIndividualItemsColumns;                          //@synthesize allPhotosPreferredIndividualItemsColumns=_allPhotosPreferredIndividualItemsColumns - In the implementation block
@property (nonatomic,copy) NSNumber * allPhotosAspectFit;                                                //@synthesize allPhotosAspectFit=_allPhotosAspectFit - In the implementation block
@property (nonatomic,copy) NSNumber * allPhotosAspectFitInCompact;                                       //@synthesize allPhotosAspectFitInCompact=_allPhotosAspectFitInCompact - In the implementation block
@property (nonatomic,copy) NSNumber * photosGridColumns;                                                 //@synthesize photosGridColumns=_photosGridColumns - In the implementation block
@property (nonatomic,copy) NSNumber * photosGridPreferredIndividualItemsColumns;                         //@synthesize photosGridPreferredIndividualItemsColumns=_photosGridPreferredIndividualItemsColumns - In the implementation block
@property (nonatomic,copy) NSNumber * photosGridAspectFit;                                               //@synthesize photosGridAspectFit=_photosGridAspectFit - In the implementation block
@property (nonatomic,copy) NSNumber * photosGridAspectFitInCompact;                                      //@synthesize photosGridAspectFitInCompact=_photosGridAspectFitInCompact - In the implementation block
@property (nonatomic,copy) NSNumber * didShowCurationFooter;                                             //@synthesize didShowCurationFooter=_didShowCurationFooter - In the implementation block
@property (nonatomic,copy) NSNumber * didShowCompletedCurationFooterAnimation;                           //@synthesize didShowCompletedCurationFooterAnimation=_didShowCompletedCurationFooterAnimation - In the implementation block
@property (nonatomic,copy) NSNumber * lastRadarPromptAnsweredQuestionCount;                              //@synthesize lastRadarPromptAnsweredQuestionCount=_lastRadarPromptAnsweredQuestionCount - In the implementation block
@property (nonatomic,copy) NSDate * lastSurveyQuestionsRadarPromptDate;                                  //@synthesize lastSurveyQuestionsRadarPromptDate=_lastSurveyQuestionsRadarPromptDate - In the implementation block
@property (nonatomic,copy) NSDate * surveyQuestionsHideDate;                                             //@synthesize surveyQuestionsHideDate=_surveyQuestionsHideDate - In the implementation block
@property (nonatomic,copy) NSNumber * axExposeAllVisibleElements;                                        //@synthesize axExposeAllVisibleElements=_axExposeAllVisibleElements - In the implementation block
+(id)standardUserDefaults;
-(NSNumber *)daysMarginScale;
-(void)setAllPhotosAspectFitInCompact:(NSNumber *)arg1 ;
-(void)setAllPhotosAspectFit:(NSNumber *)arg1 ;
-(void)setDaysMarginScale:(NSNumber *)arg1 ;
-(void)setDidShowCurationFooter:(NSNumber *)arg1 ;
-(NSNumber *)allPhotosAspectFit;
-(NSDate *)surveyQuestionsHideDate;
-(NSNumber *)allPhotosAspectFitInCompact;
-(NSNumber *)photosGridAspectFitInCompact;
-(void)setAxExposeAllVisibleElements:(NSNumber *)arg1 ;
-(NSNumber *)photosGridPreferredIndividualItemsColumns;
-(void)setAllPhotosCaptionsVisible:(NSNumber *)arg1 ;
-(void)setPhotosGridAspectFit:(NSNumber *)arg1 ;
-(NSNumber *)allPhotosCaptionsVisible;
-(id)initWithDataSource:(id)arg1 ;
-(NSNumber *)didShowCurationFooter;
-(id<PXZoomablePhotosUserDefaults>)curatedLibraryUserDefaults;
-(void)setLastRadarPromptAnsweredQuestionCount:(NSNumber *)arg1 ;
-(id)init;
-(NSNumber *)allPhotosColumns;
-(void)setAllPhotosColumns:(NSNumber *)arg1 ;
-(id<PXUserDefaultsDataSource>)dataSource;
-(NSNumber *)photosGridColumns;
-(void)setSurveyQuestionsRadarPromptDate:(id)arg1 ;
-(id<PXZoomablePhotosUserDefaults>)photosGridsUserDefaults;
-(void)setPhotosGridColumns:(NSNumber *)arg1 ;
-(NSNumber *)lastRadarPromptAnsweredQuestionCount;
-(NSNumber *)allPhotosPreferredIndividualItemsColumns;
-(NSNumber *)axExposeAllVisibleElements;
-(void)setSurveyQuestionsHideDate:(NSDate *)arg1 ;
-(void)setAllPhotosPreferredIndividualItemsColumns:(NSNumber *)arg1 ;
-(void)setDidShowCompletedCurationFooterAnimation:(NSNumber *)arg1 ;
-(void)setPhotosGridPreferredIndividualItemsColumns:(NSNumber *)arg1 ;
-(NSNumber *)didShowCompletedCurationFooterAnimation;
-(NSNumber *)photosGridAspectFit;
-(void)setPhotosGridAspectFitInCompact:(NSNumber *)arg1 ;
-(void)setallPhotosAspectFitInCompact:(id)arg1 ;
-(NSDate *)lastSurveyQuestionsRadarPromptDate;
-(void)setCuratedLibraryZoomLevel:(NSNumber *)arg1 ;
-(void)setNumberOfAnsweredQuestionsFromLastRadarPrompt:(id)arg1 ;
-(NSNumber *)curatedLibraryZoomLevel;
-(void)setLastSurveyQuestionsRadarPromptDate:(NSDate *)arg1 ;
@end

