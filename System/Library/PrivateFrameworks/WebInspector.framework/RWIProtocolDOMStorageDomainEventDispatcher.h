/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)safe_domStorageItemsClearedWithStorageId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)domStorageItemsClearedWithStorageId:(id)arg1 ;
-(void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
@end
