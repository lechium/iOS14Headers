/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppPrototypeIdentifier, IKViewElement, NSIndexSet;

@interface IKDSEPrototypeMapping : NSObject {

	IKAppPrototypeIdentifier* _identifier;
	IKViewElement* _viewElement;
	NSIndexSet* _usageIndexes;

}

@property (nonatomic,readonly) IKAppPrototypeIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;                        //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * usageIndexes;                     //@synthesize usageIndexes=_usageIndexes - In the implementation block
+(id)prototypeMappingFromAppPrototype:(id)arg1 dataSourceElement:(id)arg2 elementFactory:(id)arg3 ;
-(IKAppPrototypeIdentifier *)identifier;
-(IKViewElement *)viewElement;
-(NSIndexSet *)usageIndexes;
-(id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3 ;
@end

