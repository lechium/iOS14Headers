/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKKnowledgeStore;

@interface INUserContextStore : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}
+(id)sharedStore;
+(id)findDataInValue:(id)arg1 ;
+(id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2 ;
-(id)_init;
-(id)_initWithKnowledgeStore:(id)arg1 ;
-(void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2 ;
-(void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

