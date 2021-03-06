/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <TSReading/EQKitMathMLUnaryNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataPhantom.h>

@class NSString;

@interface EQKitMathMLMPhantom : EQKitMathMLUnaryNode <EQKitMathMLNode, EQKitLayoutSchemataPhantom>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Schemata*)layoutSchemata;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataChild;
@end

