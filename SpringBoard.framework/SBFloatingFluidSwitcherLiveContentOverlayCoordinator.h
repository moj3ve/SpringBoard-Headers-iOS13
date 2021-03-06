/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFloatingFluidSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {
    long long  _containerOrientation;
    <SBSwitcherLiveContentOverlayCoordinatorDelegate> * _delegate;
    NSString * _keyboardFocusSceneID;
    bool  _liveContentOverlayUpdatesSuspended;
    NSMutableDictionary * _liveContentOverlays;
    SBFloatingApplicationLiveContentWindow * _recycledApplicationSceneLiveContentWindow;
}

@property (nonatomic) long long containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSwitcherLiveContentOverlayCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyboardFocusSceneID;
@property (getter=areLiveContentOverlayUpdatesSuspended, nonatomic) bool liveContentOverlayUpdatesSuspended;
@property (nonatomic, retain) NSMutableDictionary *liveContentOverlays;
@property (nonatomic, retain) SBFloatingApplicationLiveContentWindow *recycledApplicationSceneLiveContentWindow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addApplicationSceneLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(bool)arg3;
- (void)_addInlineAppExposeLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(bool)arg3;
- (void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(bool)arg3;
- (void)_configureLiveContentOverlayView:(id)arg1 forTransitionContext:(id)arg2;
- (bool)_isLayoutElementBlockedForScreenTimeExpiration:(id)arg1;
- (id)_newApplicationLiveContentOverlayViewForTransitionContext:(id)arg1;
- (id)_newInlineLiveContentOverlayViewForTransitionContext:(id)arg1;
- (id)_newLiveContentOverlayViewForTransitionContext:(id)arg1;
- (void)_removeApplicationSceneLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2;
- (void)_removeInlineAppExposeLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2;
- (void)_removeLiveContentOverlayForAppLayout:(id)arg1;
- (bool)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)arg1;
- (void)_updateDisplayLayoutElementsForActiveAppLayout:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (bool)areLiveContentOverlayUpdatesSuspended;
- (long long)containerOrientation;
- (id)delegate;
- (id)init;
- (id)keyboardFocusSceneID;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (id)liveContentOverlays;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)recycledApplicationSceneLiveContentWindow;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardFocusSceneID:(id)arg1;
- (void)setLiveContentOverlayUpdatesSuspended:(bool)arg1;
- (void)setLiveContentOverlays:(id)arg1;
- (void)setRecycledApplicationSceneLiveContentWindow:(id)arg1;

@end
