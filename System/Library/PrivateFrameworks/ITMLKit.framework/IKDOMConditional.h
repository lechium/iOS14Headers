/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet, IKDOMElement, NSString;

@interface IKDOMConditional : NSObject {

	NSArray* _inclusionExpressions;
	NSArray* _exclusionExpressions;
	NSSet* _dependentPathStrings;
	IKDOMElement* _domElement;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * inclusionExpressions;              //@synthesize inclusionExpressions=_inclusionExpressions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * exclusionExpressions;              //@synthesize exclusionExpressions=_exclusionExpressions - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                 //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;                //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
-(NSString *)identifier;
-(id)initWithDOMElement:(id)arg1 ;
-(IKDOMElement *)domElement;
-(NSSet *)dependentPathStrings;
-(NSArray *)inclusionExpressions;
-(NSArray *)exclusionExpressions;
-(BOOL)passesForDataItem:(id)arg1 default:(BOOL)arg2 ;
-(void)mutateWithDOMElement:(id)arg1 ;
@end

