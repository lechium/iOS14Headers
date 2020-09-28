/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@class NSString;

@interface WFGetDirectionsAction : WFAction <WFDynamicEnumerationDataSource, WFParameterEventObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)directionsModeFromString:(id)arg1 ;
+(id)localizedNameForDirectionsModeString:(id)arg1 ;
-(id)appIdentifier;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(id)supportedDirectionsModesForAppName:(id)arg1 ;
-(void)getStartAddressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openMapsLink:(id)arg1 inAppNamed:(id)arg2 ;
-(void)getMapsURLForMapsLink:(id)arg1 appName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2 ;
@end
