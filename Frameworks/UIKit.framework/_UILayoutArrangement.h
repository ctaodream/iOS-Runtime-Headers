/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILayoutArrangement : NSObject <_UILAPropertySource> {
    BOOL _awaitingAnimationLayoutPass;
    int _axis;
    UIView *_canvas;
    NSMutableArray *_canvasConnectionConstraints;
    _UILAConfigurationHistory *_configurationHistory;
    NSMutableSet *_hiddenItems;
    NSMutableSet *_incomingItems;
    BOOL _layoutFillsCanvas;
    BOOL _layoutUsesCanvasMarginsWhenFilling;
    NSMutableArray *_mutableItems;
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableSet *_outgoingItems;
    _UILayoutSpacer *_spanningLayoutGuide;
    _UILAConfigurationHistory *_unanimatedConfigurationTarget;
}

@property (nonatomic, readonly) BOOL _awaitingAnimationLayoutPass;
@property (nonatomic, readonly, retain) _UILAConfigurationHistory *_configurationHistory;
@property (nonatomic, readonly) NSSet *_hiddenItems;
@property (nonatomic, readonly) NSSet *_incomingItems;
@property (setter=_setMutableItems:, nonatomic, retain) NSMutableArray *_mutableItems;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *_outgoingItems;
@property (nonatomic, readonly) <_UILAPropertySource> *_propertySource;
@property (nonatomic, readonly, retain) _UILayoutSpacer *_spanningLayoutGuide;
@property (setter=_setUnanimatedConfigurationTarget:, nonatomic, retain) _UILAConfigurationHistory *_unanimatedConfigurationTarget;
@property (nonatomic) int axis;
@property (nonatomic) UIView *canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;

- (void).cxx_destruct;
- (BOOL)_awaitingAnimationLayoutPass;
- (int)_axisForSpanningLayoutGuide;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (int)_centerAttributeForCanvasConnections;
- (void)_clearAllConstraintsArrays;
- (void)_clearCanvasConnectionConstraints;
- (id)_configurationHistory;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (void)_createSpanningLayoutGuide;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (int)_dimensionAttributeForCurrentAxis;
- (BOOL)_hasStaleConfiguration;
- (id)_hiddenItems;
- (id)_identifierForSpanningLayoutGuide;
- (id)_incomingItems;
- (unsigned int)_indexOfItemForLocationAttribute:(int)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (BOOL)_itemWantsLayoutAsIfVisible:(id)arg1;
- (int)_layoutRelationForCanvasConnectionForAttribute:(int)arg1;
- (int)_minAttributeForCanvasConnections;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (id)_mutableItems;
- (id)_newlyHiddenItems;
- (id)_newlyUnhiddenItems;
- (id)_outgoingItems;
- (id)_propertySource;
- (void)_registerAnimationRequest;
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;
- (void)_setMutableItems:(id)arg1;
- (void)_setUnanimatedConfigurationTarget:(id)arg1;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (id)_spanningLayoutGuide;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2;
- (id)_unanimatedConfigurationTarget;
- (void)_updateArrangementConstraints;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (void)_updateConfigurationHistory;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (BOOL)_usesCenteringConnectionConstraint;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(int)arg1;
- (id)_viewOrGuideForLocationAttribute:(int)arg1;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)addItem:(id)arg1;
- (int)axis;
- (id)canvas;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 onAxis:(int)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned int)arg2;
- (id)items;
- (BOOL)layoutFillsCanvas;
- (BOOL)layoutUsesCanvasMarginsWhenFilling;
- (void)removeItem:(id)arg1;
- (void)setAxis:(int)arg1;
- (void)setCanvas:(id)arg1;
- (void)setLayoutFillsCanvas:(BOOL)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1;

@end