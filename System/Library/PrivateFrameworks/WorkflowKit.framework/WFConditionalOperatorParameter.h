/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSArray, NSString;

@interface WFConditionalOperatorParameter : WFEnumerationParameter <WFModuleSummarySupporting> {

	BOOL _usingLegacyOperatorBehavior;
	NSArray* _possibleStates;
	NSArray* _possibleContentOperators;
	long long _contentType;
	unsigned long long _displayableTimeUnits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * possibleStates;                             //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * possibleContentOperators;                   //@synthesize possibleContentOperators=_possibleContentOperators - In the implementation block
@property (nonatomic,readonly) long long contentType;                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) unsigned long long displayableTimeUnits;              //@synthesize displayableTimeUnits=_displayableTimeUnits - In the implementation block
@property (nonatomic,readonly) BOOL usingLegacyOperatorBehavior;                     //@synthesize usingLegacyOperatorBehavior=_usingLegacyOperatorBehavior - In the implementation block
-(id)moduleSummarySlotsForState:(id)arg1 ;
-(long long)contentType;
-(NSArray *)possibleStates;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(Class)stateClass;
-(id)importQuestionBehavior;
-(BOOL)allowsMultipleValues;
-(void)setPossibleContentOperators:(id)arg1 withContentType:(long long)arg2 displayableTimeUnits:(unsigned long long)arg3 usingLegacyOperatorBehavior:(BOOL)arg4 ;
-(NSArray *)possibleContentOperators;
-(unsigned long long)displayableTimeUnits;
-(BOOL)usingLegacyOperatorBehavior;
@end
