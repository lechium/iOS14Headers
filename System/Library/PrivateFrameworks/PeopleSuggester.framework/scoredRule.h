/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface scoredRule : NSObject {

	float _ruleScore;
	long long _ruleLabel;

}

@property (assign,nonatomic) long long ruleLabel;              //@synthesize ruleLabel=_ruleLabel - In the implementation block
@property (assign,nonatomic) float ruleScore;                  //@synthesize ruleScore=_ruleScore - In the implementation block
-(void)setRuleLabel:(long long)arg1 ;
-(void)setRuleScore:(float)arg1 ;
-(id)initWithLabel:(long long)arg1 score:(float)arg2 ;
-(long long)ruleLabel;
-(float)ruleScore;
@end
