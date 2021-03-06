/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WATodayModelObserver.h>

@class WATodayAutoupdatingLocationModel, UILabel, UIImageView, NSMutableArray, UIColor, NSString;

@interface WAGreetingView : UIView <WATodayModelObserver> {

	BOOL _isViewCreated;
	WATodayAutoupdatingLocationModel* _todayModel;
	UILabel* _natualLanguageDescriptionLabel;
	UIImageView* _conditionImageView;
	UILabel* _temperatureLabel;
	NSMutableArray* _constraints;
	UIColor* _labelColor;

}

@property (nonatomic,retain) WATodayAutoupdatingLocationModel * todayModel;              //@synthesize todayModel=_todayModel - In the implementation block
@property (nonatomic,retain) UILabel * natualLanguageDescriptionLabel;                   //@synthesize natualLanguageDescriptionLabel=_natualLanguageDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * conditionImageView;                           //@synthesize conditionImageView=_conditionImageView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                 //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                               //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) BOOL isViewCreated;                                         //@synthesize isViewCreated=_isViewCreated - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                       //@synthesize labelColor=_labelColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateView;
-(id)_temperature;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)initWithColor:(id)arg1 ;
-(void)dealloc;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setupConstraints;
-(UILabel *)temperatureLabel;
-(void)startService;
-(NSMutableArray *)constraints;
-(void)createViews;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(void)todayModelWantsUpdate:(id)arg1 ;
-(void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2 ;
-(void)_teardownWeatherModel;
-(WATodayAutoupdatingLocationModel *)todayModel;
-(void)_setupWeatherModel;
-(id)_conditionsImage;
-(void)setTodayModel:(WATodayAutoupdatingLocationModel *)arg1 ;
-(void)setIsViewCreated:(BOOL)arg1 ;
-(void)updateLabelColors;
-(UILabel *)natualLanguageDescriptionLabel;
-(UIImageView *)conditionImageView;
-(void)setNatualLanguageDescriptionLabel:(UILabel *)arg1 ;
-(void)setConditionImageView:(UIImageView *)arg1 ;
-(BOOL)isViewCreated;
@end

