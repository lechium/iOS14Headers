/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject {

	NSMutableDictionary* _classMap;
	NSMutableDictionary* _typeMap;
	NSMutableDictionary* _dependentMap;

}
-(id)init;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
-(Class)elementClassByTagName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
-(BOOL)isDependentByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
@end

